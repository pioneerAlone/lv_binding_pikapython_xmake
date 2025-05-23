/*
 * [Warning!] This file is auto-generated by pika compiler.
 * Do not edit it manually.
 * The source code is *.pyi file.
 * More details: 
 * English Doc:
 * https://pikadoc-en.readthedocs.io/en/latest/PikaScript%20%E6%A8%A1%E5%9D%97%E6%A6%82%E8%BF%B0.html
 * Chinese Doc:
 * http://pikapython.com/doc/PikaScript%20%E6%A8%A1%E5%9D%97%E6%A6%82%E8%BF%B0.html
 */

#ifndef __pika_lvgl_style_t__H
#define __pika_lvgl_style_t__H
#include <stdio.h>
#include <stdlib.h>
#include "PikaObj.h"

PikaObj *New_pika_lvgl_style_t(Args *args);

void pika_lvgl_style_t___init__(PikaObj *self);
int pika_lvgl_style_t_get_num_custom_props(PikaObj *self);
void pika_lvgl_style_t_init(PikaObj *self);
int pika_lvgl_style_t_is_empty(PikaObj *self);
int pika_lvgl_style_t_prop_has_flag(PikaObj *self, int prop, int flag);
int pika_lvgl_style_t_register_prop(PikaObj *self, int flag);
int pika_lvgl_style_t_remove_prop(PikaObj *self, int prop);
void pika_lvgl_style_t_reset(PikaObj *self);
void pika_lvgl_style_t_set_align(PikaObj *self, int value);
void pika_lvgl_style_t_set_anim_speed(PikaObj *self, int value);
void pika_lvgl_style_t_set_anim_time(PikaObj *self, int value);
void pika_lvgl_style_t_set_arc_color(PikaObj *self, PikaObj* value);
void pika_lvgl_style_t_set_arc_img_src(PikaObj *self, uint8_t* value);
void pika_lvgl_style_t_set_arc_opa(PikaObj *self, int value);
void pika_lvgl_style_t_set_arc_rounded(PikaObj *self, int value);
void pika_lvgl_style_t_set_arc_width(PikaObj *self, int value);
void pika_lvgl_style_t_set_base_dir(PikaObj *self, int value);
void pika_lvgl_style_t_set_bg_color(PikaObj *self, PikaObj* value);
void pika_lvgl_style_t_set_bg_dither_mode(PikaObj *self, int value);
void pika_lvgl_style_t_set_bg_grad_color(PikaObj *self, PikaObj* value);
void pika_lvgl_style_t_set_bg_grad_dir(PikaObj *self, int value);
void pika_lvgl_style_t_set_bg_grad_stop(PikaObj *self, int value);
void pika_lvgl_style_t_set_bg_img_opa(PikaObj *self, int value);
void pika_lvgl_style_t_set_bg_img_recolor(PikaObj *self, PikaObj* value);
void pika_lvgl_style_t_set_bg_img_recolor_opa(PikaObj *self, int value);
void pika_lvgl_style_t_set_bg_img_src(PikaObj *self, uint8_t* value);
void pika_lvgl_style_t_set_bg_img_tiled(PikaObj *self, int value);
void pika_lvgl_style_t_set_bg_main_stop(PikaObj *self, int value);
void pika_lvgl_style_t_set_bg_opa(PikaObj *self, int value);
void pika_lvgl_style_t_set_blend_mode(PikaObj *self, int value);
void pika_lvgl_style_t_set_border_color(PikaObj *self, PikaObj* value);
void pika_lvgl_style_t_set_border_opa(PikaObj *self, int value);
void pika_lvgl_style_t_set_border_post(PikaObj *self, int value);
void pika_lvgl_style_t_set_border_side(PikaObj *self, int value);
void pika_lvgl_style_t_set_border_width(PikaObj *self, int value);
void pika_lvgl_style_t_set_clip_corner(PikaObj *self, int value);
void pika_lvgl_style_t_set_color_filter_opa(PikaObj *self, int value);
void pika_lvgl_style_t_set_flex_cross_place(PikaObj *self, int value);
void pika_lvgl_style_t_set_flex_flow(PikaObj *self, int value);
void pika_lvgl_style_t_set_flex_grow(PikaObj *self, int value);
void pika_lvgl_style_t_set_flex_main_place(PikaObj *self, int value);
void pika_lvgl_style_t_set_flex_track_place(PikaObj *self, int value);
void pika_lvgl_style_t_set_height(PikaObj *self, int value);
void pika_lvgl_style_t_set_img_opa(PikaObj *self, int value);
void pika_lvgl_style_t_set_img_recolor(PikaObj *self, PikaObj* value);
void pika_lvgl_style_t_set_img_recolor_opa(PikaObj *self, int value);
void pika_lvgl_style_t_set_layout(PikaObj *self, int value);
void pika_lvgl_style_t_set_line_color(PikaObj *self, PikaObj* value);
void pika_lvgl_style_t_set_line_dash_gap(PikaObj *self, int value);
void pika_lvgl_style_t_set_line_dash_width(PikaObj *self, int value);
void pika_lvgl_style_t_set_line_opa(PikaObj *self, int value);
void pika_lvgl_style_t_set_line_rounded(PikaObj *self, int value);
void pika_lvgl_style_t_set_line_width(PikaObj *self, int value);
void pika_lvgl_style_t_set_max_height(PikaObj *self, int value);
void pika_lvgl_style_t_set_max_width(PikaObj *self, int value);
void pika_lvgl_style_t_set_min_height(PikaObj *self, int value);
void pika_lvgl_style_t_set_min_width(PikaObj *self, int value);
void pika_lvgl_style_t_set_opa(PikaObj *self, int value);
void pika_lvgl_style_t_set_outline_color(PikaObj *self, PikaObj* value);
void pika_lvgl_style_t_set_outline_opa(PikaObj *self, int value);
void pika_lvgl_style_t_set_outline_pad(PikaObj *self, int value);
void pika_lvgl_style_t_set_outline_width(PikaObj *self, int value);
void pika_lvgl_style_t_set_pad_all(PikaObj *self, int value);
void pika_lvgl_style_t_set_pad_bottom(PikaObj *self, int value);
void pika_lvgl_style_t_set_pad_column(PikaObj *self, int value);
void pika_lvgl_style_t_set_pad_gap(PikaObj *self, int value);
void pika_lvgl_style_t_set_pad_hor(PikaObj *self, int value);
void pika_lvgl_style_t_set_pad_left(PikaObj *self, int value);
void pika_lvgl_style_t_set_pad_right(PikaObj *self, int value);
void pika_lvgl_style_t_set_pad_row(PikaObj *self, int value);
void pika_lvgl_style_t_set_pad_top(PikaObj *self, int value);
void pika_lvgl_style_t_set_pad_ver(PikaObj *self, int value);
void pika_lvgl_style_t_set_radius(PikaObj *self, int value);
void pika_lvgl_style_t_set_shadow_color(PikaObj *self, PikaObj* value);
void pika_lvgl_style_t_set_shadow_ofs_x(PikaObj *self, int value);
void pika_lvgl_style_t_set_shadow_ofs_y(PikaObj *self, int value);
void pika_lvgl_style_t_set_shadow_opa(PikaObj *self, int value);
void pika_lvgl_style_t_set_shadow_spread(PikaObj *self, int value);
void pika_lvgl_style_t_set_shadow_width(PikaObj *self, int value);
void pika_lvgl_style_t_set_size(PikaObj *self, int value);
void pika_lvgl_style_t_set_text_align(PikaObj *self, int value);
void pika_lvgl_style_t_set_text_color(PikaObj *self, PikaObj* value);
void pika_lvgl_style_t_set_text_decor(PikaObj *self, int value);
void pika_lvgl_style_t_set_text_letter_space(PikaObj *self, int value);
void pika_lvgl_style_t_set_text_line_space(PikaObj *self, int value);
void pika_lvgl_style_t_set_text_opa(PikaObj *self, int value);
void pika_lvgl_style_t_set_transform_angle(PikaObj *self, int value);
void pika_lvgl_style_t_set_transform_height(PikaObj *self, int value);
void pika_lvgl_style_t_set_transform_pivot_x(PikaObj *self, int value);
void pika_lvgl_style_t_set_transform_pivot_y(PikaObj *self, int value);
void pika_lvgl_style_t_set_transform_width(PikaObj *self, int value);
void pika_lvgl_style_t_set_transform_zoom(PikaObj *self, int value);
void pika_lvgl_style_t_set_translate_x(PikaObj *self, int value);
void pika_lvgl_style_t_set_translate_y(PikaObj *self, int value);
void pika_lvgl_style_t_set_width(PikaObj *self, int value);
void pika_lvgl_style_t_set_x(PikaObj *self, int value);
void pika_lvgl_style_t_set_y(PikaObj *self, int value);

#endif
