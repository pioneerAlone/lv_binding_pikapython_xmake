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

#ifndef __pika_lvgl_label__H
#define __pika_lvgl_label__H
#include <stdio.h>
#include <stdlib.h>
#include "PikaObj.h"

PikaObj *New_pika_lvgl_label(Args *args);

void pika_lvgl_label___init__(PikaObj *self, PikaObj* parent);
void pika_lvgl_label_set_long_mode(PikaObj *self, int mode);
void pika_lvgl_label_set_recolor(PikaObj *self, int en);
void pika_lvgl_label_set_style_text_align(PikaObj *self, int value, int selector);
void pika_lvgl_label_set_text(PikaObj *self, char* txt);

#endif
