#pragma once
#define sapp_isvalid sapp_Linux_isvalid
#define sapp_width sapp_Linux_width
#define sapp_widthf sapp_Linux_widthf
#define sapp_height sapp_Linux_height
#define sapp_heightf sapp_Linux_heightf
#define sapp_color_format sapp_Linux_color_format
#define sapp_depth_format sapp_Linux_depth_format
#define sapp_sample_count sapp_Linux_sample_count
#define sapp_high_dpi sapp_Linux_high_dpi
#define sapp_dpi_scale sapp_Linux_dpi_scale
#define sapp_show_keyboard sapp_Linux_show_keyboard
#define sapp_keyboard_shown sapp_Linux_keyboard_shown
#define sapp_is_fullscreen sapp_Linux_is_fullscreen
#define sapp_toggle_fullscreen sapp_Linux_toggle_fullscreen
#define sapp_show_mouse sapp_Linux_show_mouse
#define sapp_mouse_shown sapp_Linux_mouse_shown
#define sapp_lock_mouse sapp_Linux_lock_mouse
#define sapp_mouse_locked sapp_Linux_mouse_locked
#define sapp_set_mouse_cursor sapp_Linux_set_mouse_cursor
#define sapp_get_mouse_cursor sapp_Linux_get_mouse_cursor
#define sapp_userdata sapp_Linux_userdata
#define sapp_query_desc sapp_Linux_query_desc
#define sapp_request_quit sapp_Linux_request_quit
#define sapp_cancel_quit sapp_Linux_cancel_quit
#define sapp_quit sapp_Linux_quit
#define sapp_consume_event sapp_Linux_consume_event
#define sapp_frame_count sapp_Linux_frame_count
#define sapp_frame_duration sapp_Linux_frame_duration
#define sapp_set_clipboard_string sapp_Linux_set_clipboard_string
#define sapp_get_clipboard_string sapp_Linux_get_clipboard_string
#define sapp_set_window_title sapp_Linux_set_window_title
#define sapp_set_icon sapp_Linux_set_icon
#define sapp_get_num_dropped_files sapp_Linux_get_num_dropped_files
#define sapp_get_dropped_file_path sapp_Linux_get_dropped_file_path
#define sapp_run sapp_Linux_run
#define sapp_egl_get_display sapp_Linux_egl_get_display
#define sapp_egl_get_context sapp_Linux_egl_get_context
#define sapp_html5_ask_leave_site sapp_Linux_html5_ask_leave_site
#define sapp_html5_get_dropped_file_size sapp_Linux_html5_get_dropped_file_size
#define sapp_html5_fetch_dropped_file sapp_Linux_html5_fetch_dropped_file
#define sapp_metal_get_device sapp_Linux_metal_get_device
#define sapp_metal_get_current_drawable sapp_Linux_metal_get_current_drawable
#define sapp_metal_get_depth_stencil_texture sapp_Linux_metal_get_depth_stencil_texture
#define sapp_metal_get_msaa_color_texture sapp_Linux_metal_get_msaa_color_texture
#define sapp_macos_get_window sapp_Linux_macos_get_window
#define sapp_ios_get_window sapp_Linux_ios_get_window
#define sapp_d3d11_get_device sapp_Linux_d3d11_get_device
#define sapp_d3d11_get_device_context sapp_Linux_d3d11_get_device_context
#define sapp_d3d11_get_swap_chain sapp_Linux_d3d11_get_swap_chain
#define sapp_d3d11_get_render_view sapp_Linux_d3d11_get_render_view
#define sapp_d3d11_get_resolve_view sapp_Linux_d3d11_get_resolve_view
#define sapp_d3d11_get_depth_stencil_view sapp_Linux_d3d11_get_depth_stencil_view
#define sapp_win32_get_hwnd sapp_Linux_win32_get_hwnd
#define sapp_wgpu_get_device sapp_Linux_wgpu_get_device
#define sapp_wgpu_get_render_view sapp_Linux_wgpu_get_render_view
#define sapp_wgpu_get_resolve_view sapp_Linux_wgpu_get_resolve_view
#define sapp_wgpu_get_depth_stencil_view sapp_Linux_wgpu_get_depth_stencil_view
#define sapp_gl_get_framebuffer sapp_Linux_gl_get_framebuffer
#define sapp_gl_get_major_version sapp_Linux_gl_get_major_version
#define sapp_gl_get_minor_version sapp_Linux_gl_get_minor_version
#define sapp_android_get_native_activity sapp_Linux_android_get_native_activity
#define sg_setup sg_Linux_setup
#define sg_shutdown sg_Linux_shutdown
#define sg_isvalid sg_Linux_isvalid
#define sg_reset_state_cache sg_Linux_reset_state_cache
#define sg_install_trace_hooks sg_Linux_install_trace_hooks
#define sg_push_debug_group sg_Linux_push_debug_group
#define sg_pop_debug_group sg_Linux_pop_debug_group
#define sg_add_commit_listener sg_Linux_add_commit_listener
#define sg_remove_commit_listener sg_Linux_remove_commit_listener
#define sg_make_buffer sg_Linux_make_buffer
#define sg_make_image sg_Linux_make_image
#define sg_make_sampler sg_Linux_make_sampler
#define sg_make_shader sg_Linux_make_shader
#define sg_make_pipeline sg_Linux_make_pipeline
#define sg_make_attachments sg_Linux_make_attachments
#define sg_destroy_buffer sg_Linux_destroy_buffer
#define sg_destroy_image sg_Linux_destroy_image
#define sg_destroy_sampler sg_Linux_destroy_sampler
#define sg_destroy_shader sg_Linux_destroy_shader
#define sg_destroy_pipeline sg_Linux_destroy_pipeline
#define sg_destroy_attachments sg_Linux_destroy_attachments
#define sg_update_buffer sg_Linux_update_buffer
#define sg_update_image sg_Linux_update_image
#define sg_append_buffer sg_Linux_append_buffer
#define sg_query_buffer_overflow sg_Linux_query_buffer_overflow
#define sg_query_buffer_will_overflow sg_Linux_query_buffer_will_overflow
#define sg_begin_pass sg_Linux_begin_pass
#define sg_apply_viewport sg_Linux_apply_viewport
#define sg_apply_viewportf sg_Linux_apply_viewportf
#define sg_apply_scissor_rect sg_Linux_apply_scissor_rect
#define sg_apply_scissor_rectf sg_Linux_apply_scissor_rectf
#define sg_apply_pipeline sg_Linux_apply_pipeline
#define sg_apply_bindings sg_Linux_apply_bindings
#define sg_apply_uniforms sg_Linux_apply_uniforms
#define sg_draw sg_Linux_draw
#define sg_end_pass sg_Linux_end_pass
#define sg_commit sg_Linux_commit
#define sg_query_desc sg_Linux_query_desc
#define sg_query_backend sg_Linux_query_backend
#define sg_query_features sg_Linux_query_features
#define sg_query_limits sg_Linux_query_limits
#define sg_query_pixelformat sg_Linux_query_pixelformat
#define sg_query_row_pitch sg_Linux_query_row_pitch
#define sg_query_surface_pitch sg_Linux_query_surface_pitch
#define sg_query_buffer_state sg_Linux_query_buffer_state
#define sg_query_image_state sg_Linux_query_image_state
#define sg_query_sampler_state sg_Linux_query_sampler_state
#define sg_query_shader_state sg_Linux_query_shader_state
#define sg_query_pipeline_state sg_Linux_query_pipeline_state
#define sg_query_attachments_state sg_Linux_query_attachments_state
#define sg_query_buffer_info sg_Linux_query_buffer_info
#define sg_query_image_info sg_Linux_query_image_info
#define sg_query_sampler_info sg_Linux_query_sampler_info
#define sg_query_shader_info sg_Linux_query_shader_info
#define sg_query_pipeline_info sg_Linux_query_pipeline_info
#define sg_query_attachments_info sg_Linux_query_attachments_info
#define sg_query_buffer_desc sg_Linux_query_buffer_desc
#define sg_query_image_desc sg_Linux_query_image_desc
#define sg_query_sampler_desc sg_Linux_query_sampler_desc
#define sg_query_shader_desc sg_Linux_query_shader_desc
#define sg_query_pipeline_desc sg_Linux_query_pipeline_desc
#define sg_query_attachments_desc sg_Linux_query_attachments_desc
#define sg_query_buffer_defaults sg_Linux_query_buffer_defaults
#define sg_query_image_defaults sg_Linux_query_image_defaults
#define sg_query_sampler_defaults sg_Linux_query_sampler_defaults
#define sg_query_shader_defaults sg_Linux_query_shader_defaults
#define sg_query_pipeline_defaults sg_Linux_query_pipeline_defaults
#define sg_query_attachments_defaults sg_Linux_query_attachments_defaults
#define sg_alloc_buffer sg_Linux_alloc_buffer
#define sg_alloc_image sg_Linux_alloc_image
#define sg_alloc_sampler sg_Linux_alloc_sampler
#define sg_alloc_shader sg_Linux_alloc_shader
#define sg_alloc_pipeline sg_Linux_alloc_pipeline
#define sg_alloc_attachments sg_Linux_alloc_attachments
#define sg_dealloc_buffer sg_Linux_dealloc_buffer
#define sg_dealloc_image sg_Linux_dealloc_image
#define sg_dealloc_sampler sg_Linux_dealloc_sampler
#define sg_dealloc_shader sg_Linux_dealloc_shader
#define sg_dealloc_pipeline sg_Linux_dealloc_pipeline
#define sg_dealloc_attachments sg_Linux_dealloc_attachments
#define sg_init_buffer sg_Linux_init_buffer
#define sg_init_image sg_Linux_init_image
#define sg_init_sampler sg_Linux_init_sampler
#define sg_init_shader sg_Linux_init_shader
#define sg_init_pipeline sg_Linux_init_pipeline
#define sg_init_attachments sg_Linux_init_attachments
#define sg_uninit_buffer sg_Linux_uninit_buffer
#define sg_uninit_image sg_Linux_uninit_image
#define sg_uninit_sampler sg_Linux_uninit_sampler
#define sg_uninit_shader sg_Linux_uninit_shader
#define sg_uninit_pipeline sg_Linux_uninit_pipeline
#define sg_uninit_attachments sg_Linux_uninit_attachments
#define sg_fail_buffer sg_Linux_fail_buffer
#define sg_fail_image sg_Linux_fail_image
#define sg_fail_sampler sg_Linux_fail_sampler
#define sg_fail_shader sg_Linux_fail_shader
#define sg_fail_pipeline sg_Linux_fail_pipeline
#define sg_fail_attachments sg_Linux_fail_attachments
#define sg_enable_frame_stats sg_Linux_enable_frame_stats
#define sg_disable_frame_stats sg_Linux_disable_frame_stats
#define sg_frame_stats_enabled sg_Linux_frame_stats_enabled
#define sg_query_frame_stats sg_Linux_query_frame_stats
#define sg_d3d11_device sg_Linux_d3d11_device
#define sg_d3d11_device_context sg_Linux_d3d11_device_context
#define sg_d3d11_query_buffer_info sg_Linux_d3d11_query_buffer_info
#define sg_d3d11_query_image_info sg_Linux_d3d11_query_image_info
#define sg_d3d11_query_sampler_info sg_Linux_d3d11_query_sampler_info
#define sg_d3d11_query_shader_info sg_Linux_d3d11_query_shader_info
#define sg_d3d11_query_pipeline_info sg_Linux_d3d11_query_pipeline_info
#define sg_d3d11_query_attachments_info sg_Linux_d3d11_query_attachments_info
#define sg_mtl_device sg_Linux_mtl_device
#define sg_mtl_render_command_encoder sg_Linux_mtl_render_command_encoder
#define sg_mtl_query_buffer_info sg_Linux_mtl_query_buffer_info
#define sg_mtl_query_image_info sg_Linux_mtl_query_image_info
#define sg_mtl_query_sampler_info sg_Linux_mtl_query_sampler_info
#define sg_mtl_query_shader_info sg_Linux_mtl_query_shader_info
#define sg_mtl_query_pipeline_info sg_Linux_mtl_query_pipeline_info
#define sg_wgpu_device sg_Linux_wgpu_device
#define sg_wgpu_queue sg_Linux_wgpu_queue
#define sg_wgpu_command_encoder sg_Linux_wgpu_command_encoder
#define sg_wgpu_render_pass_encoder sg_Linux_wgpu_render_pass_encoder
#define sg_wgpu_query_buffer_info sg_Linux_wgpu_query_buffer_info
#define sg_wgpu_query_image_info sg_Linux_wgpu_query_image_info
#define sg_wgpu_query_sampler_info sg_Linux_wgpu_query_sampler_info
#define sg_wgpu_query_shader_info sg_Linux_wgpu_query_shader_info
#define sg_wgpu_query_pipeline_info sg_Linux_wgpu_query_pipeline_info
#define sg_wgpu_query_attachments_info sg_Linux_wgpu_query_attachments_info
#define sg_gl_query_buffer_info sg_Linux_gl_query_buffer_info
#define sg_gl_query_image_info sg_Linux_gl_query_image_info
#define sg_gl_query_sampler_info sg_Linux_gl_query_sampler_info
#define sg_gl_query_shader_info sg_Linux_gl_query_shader_info
#define sg_gl_query_attachments_info sg_Linux_gl_query_attachments_info
