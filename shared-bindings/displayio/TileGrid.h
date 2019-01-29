/*
 * This file is part of the Micro Python project, http://micropython.org/
 *
 * The MIT License (MIT)
 *
 * Copyright (c) 2019 Scott Shawcroft for Adafruit Industries
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 */

#ifndef MICROPY_INCLUDED_SHARED_BINDINGS_DISPLAYIO_TILEGRID_H
#define MICROPY_INCLUDED_SHARED_BINDINGS_DISPLAYIO_TILEGRID_H

#include "shared-module/displayio/TileGrid.h"

extern const mp_obj_type_t displayio_tilegrid_type;

void common_hal_displayio_tilegrid_construct(displayio_tilegrid_t *self, mp_obj_t bitmap,
        uint16_t bitmap_width_in_tiles, mp_obj_t pixel_shader, uint16_t width, uint16_t height,
        uint16_t tile_width, uint16_t tile_height, uint16_t x, uint16_t y, uint8_t default_tile);

void common_hal_displayio_tilegrid_get_position(displayio_tilegrid_t *self, int16_t* x, int16_t* y);
void common_hal_displayio_tilegrid_set_position(displayio_tilegrid_t *self, int16_t x, int16_t y);

mp_obj_t common_hal_displayio_tilegrid_get_pixel_shader(displayio_tilegrid_t *self);
void common_hal_displayio_tilegrid_set_pixel_shader(displayio_tilegrid_t *self, mp_obj_t pixel_shader);

void common_hal_displayio_textgrid_set_tile(displayio_tilegrid_t *self, uint16_t x, uint16_t y, uint8_t tile_index);
void common_hal_displayio_textgrid_set_top_left(displayio_tilegrid_t *self, uint16_t x, uint16_t y);

#endif // MICROPY_INCLUDED_SHARED_BINDINGS_DISPLAYIO_TILEGRID_H
