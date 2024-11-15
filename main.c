//------------------------------------------------------------------------------
//  cimgui-sapp.c
//
//  Demonstrates Dear ImGui UI rendering in C via
//  sokol_gfx.h + sokol_imgui.h + cimgui.h
//------------------------------------------------------------------------------
#define SOKOL_GLCORE
#define SOKOL_NO_ENTRY
#include "sokol_app.h"
#include "sokol_gfx.h"
#include "sokol_log.h"
#include "sokol_glue.h"
#define CIMGUI_DEFINE_ENUMS_AND_STRUCTS
#include "cimgui.h"
#define SOKOL_IMGUI_IMPL
#include "util/sokol_imgui.h"
#include <cosmo.h>
#include <nvapi.h>
#include "win32_tweaks.h"

typedef struct {
    uint64_t last_time;
    bool show_demo_window;
    bool show_another_window;
    int counter;
    sg_pass_action pass_action;
} state_t;
static state_t state;

void init(void) {
    // setup sokol-gfx, sokol-time and sokol-imgui
    sg_setup(&(sg_desc){
        .environment = sglue_environment(),
        .logger.func = slog_func,
    });

    // use sokol-imgui with all default-options (we're not doing
    // multi-sampled rendering or using non-default pixel formats)
    simgui_setup(&(simgui_desc_t){
        .logger.func = slog_func,
    });

    /* initialize application state */
    state = (state_t) {
        .show_demo_window = true,
        .pass_action = {
            .colors[0] = {
                .load_action = SG_LOADACTION_CLEAR,
                .clear_value = { 0.45f, 0.55f, 0.60f, 1.00f }
            }
        }
    };

    ImGuiIO *io = igGetIO();

    io->BackendPlatformName = "sokol_app";

    sg_backend backend = sg_query_backend();
    switch (backend) {
        case SG_BACKEND_GLCORE:
            io->BackendRendererName = "sokol_gfx_glcore";
            break;
        case SG_BACKEND_GLES3:
            io->BackendRendererName = "sokol_gfx_gles3";
            break;
        case SG_BACKEND_D3D11:
            io->BackendRendererName = "sokol_gfx_d3d11";
            break;
        case SG_BACKEND_METAL_IOS:
        case SG_BACKEND_METAL_MACOS:
        case SG_BACKEND_METAL_SIMULATOR:
            io->BackendRendererName = "sokol_gfx_metal";
            break;
        case SG_BACKEND_WGPU:
            io->BackendRendererName = "sokol_gfx_wgpu";
            break;
        case SG_BACKEND_DUMMY:
            io->BackendRendererName = "sokol_gfx_dummy";
            break;
    }

    igStyleColorsDark(NULL);
}

void frame(void) {
    const int width = sapp_width();
    const int height = sapp_height();
    simgui_new_frame(&(simgui_frame_desc_t){
        .width = width,
        .height = height,
        .delta_time = sapp_frame_duration(),
        .dpi_scale = sapp_dpi_scale()
    });

    /*// 1. Show a simple window*/
    /*// Tip: if we don't call ImGui::Begin()/ImGui::End() the widgets appears in a window automatically called "Debug"*/
    static float f = 0.0f;

    igBegin("Hello, world!", NULL, 0);

    igText("This is some useful text.");
    igCheckbox("Demo Window", &state.show_demo_window);
    igCheckbox("Another Window", &state.show_another_window);

    igSliderFloat("float", &f, 0.0f, 1.0f, "%.3f", ImGuiSliderFlags_None);
    igColorEdit3("clear color", (float*)&state.pass_action.colors[0].clear_value, 0);

    if (igButton("Button", (ImVec2) { 0.0f, 0.0f })) state.counter++;
    igSameLine(0.0f, -1.0f);
    igText("counter = %d", state.counter);

    igText("Application average %.3f ms/frame (%.1f FPS)", 1000.0f / igGetIO()->Framerate, igGetIO()->Framerate);
    igEnd();

    /*// 2. Show another simple window, this time using an explicit Begin/End pair*/
    if (state.show_another_window) {
        igSetNextWindowSize((ImVec2){200,100}, ImGuiCond_FirstUseEver);
        igBegin("Another Window", &state.show_another_window, 0);
        igText("Hello from another window!");
        if (igButton("Close Me", (ImVec2) { 0.0f, 0.0f })) state.show_another_window ^= 1;
        igEnd();
    }

    /*// 3. Show the ImGui test window. Most of the sample code is in ImGui::ShowDemoWindow()*/
    if (state.show_demo_window) {
        igSetNextWindowPos((ImVec2){460,20}, ImGuiCond_FirstUseEver, (ImVec2){0,0});
        igShowDemoWindow(0);
    }

    // the sokol_gfx draw pass
    sg_begin_pass(&(sg_pass){ .action = state.pass_action, .swapchain = sglue_swapchain() });
    simgui_render();
    sg_end_pass();
    sg_commit();
}

void cleanup(void) {
    simgui_shutdown();
    sg_shutdown();
}

void input(const sapp_event* event) {
    simgui_handle_event(event);
}

int main(int argc, char* argv[]) {
    ShowCrashReports();

    if (IsWindows()) {
        win32_tweaks_hide_console();
        nvapi_disable_threaded_optimization("cosmo-sokol");
    }

    sapp_desc app = {
        .init_cb = init,
        .frame_cb = frame,
        .cleanup_cb = cleanup,
        .event_cb = input,
        .width = 1280,
        .height = 720,
        .window_title = "cimgui (sokol-app)",
        .ios_keyboard_resizes_canvas = false,
        .icon.sokol_default = true,
        .enable_clipboard = true,
        .logger.func = slog_func,
    };

    sapp_run(&app);
}
