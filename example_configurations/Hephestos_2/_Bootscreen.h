/**
 * Marlin 3D Printer Firmware
 * Copyright (C) 2016 MarlinFirmware [https://github.com/MarlinFirmware/Marlin]
 *
 * Based on Sprinter and grbl.
 * Copyright (C) 2011 Camiel Gubbels / Erik van der Zalm
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 */

/**
 * Custom Bitmap for splashscreen
 *
 * You may use one of the following tools to generate the C++ bitmap array from
 * a black and white image:
 *
 *  - http://www.marlinfw.org/tools/u8glib/converter.html
 *  - http://www.digole.com/tools/PicturetoC_Hex_converter.php
 */
#include <avr/pgmspace.h>

#define CUSTOM_BOOTSCREEN_TIMEOUT   2500
#define CUSTOM_BOOTSCREEN_BMPWIDTH  62
#define CUSTOM_BOOTSCREEN_BMPHEIGHT 64

const unsigned char custom_start_bmp[512] PROGMEM = {
  0x00, 0x00, 0x00, 0x0f, 0xf0, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x1f, 0xf8, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x1f, 0xf8, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x1f, 0xf8, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x1f, 0xf8, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x1f, 0xf8, 0x00, 0x00, 0x00,
  0x00, 0x03, 0xc0, 0x0f, 0xf0, 0x07, 0x80, 0x00,
  0x00, 0x07, 0xe0, 0x07, 0xe0, 0x0f, 0xc0, 0x00,
  0x00, 0x0f, 0xf0, 0x03, 0xc0, 0x1f, 0xe0, 0x00,
  0x00, 0x1f, 0xf8, 0x00, 0x00, 0x3f, 0xf0, 0x00,
  0x00, 0x1f, 0xf8, 0x00, 0x00, 0x3f, 0xf0, 0x00,
  0x00, 0x1f, 0xf8, 0x00, 0x00, 0x3f, 0xf0, 0x00,
  0x00, 0x1f, 0xf8, 0x00, 0x00, 0x3f, 0xf0, 0x00,
  0x00, 0x1f, 0xf8, 0x00, 0x00, 0x3f, 0xf0, 0x00,
  0x00, 0x0f, 0xf0, 0x00, 0x00, 0x1f, 0xe0, 0x00,
  0x00, 0x07, 0xe0, 0x00, 0x00, 0x0f, 0xc0, 0x00,
  0x00, 0x03, 0xc0, 0x00, 0x00, 0x07, 0x80, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf0,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0xf8,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0xfc,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0xfc,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0xfc,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0xfc,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0xfc,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0xfc,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0xfc,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0xf8,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf0,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x1e, 0x00, 0x00, 0x00, 0xf0, 0x00, 0x00, 0x00,
  0x3f, 0x00, 0x00, 0x00, 0xf0, 0x00, 0x00, 0x00,
  0x7f, 0x80, 0x00, 0x00, 0xf0, 0x00, 0x00, 0x00,
  0xff, 0xc0, 0x00, 0x00, 0xf0, 0x00, 0x00, 0x00,
  0xff, 0xc0, 0x00, 0x00, 0xf0, 0x00, 0x00, 0x00,
  0xff, 0xc0, 0x00, 0x00, 0xf0, 0x00, 0x00, 0x00,
  0xff, 0xc0, 0x00, 0x00, 0xf7, 0xc0, 0x1f, 0x80,
  0xff, 0xc0, 0x00, 0x00, 0xff, 0xf0, 0x7f, 0xc0,
  0x7f, 0x80, 0x00, 0x00, 0xff, 0xf8, 0xff, 0xe0,
  0x3f, 0x00, 0x00, 0x00, 0xfc, 0xf8, 0xf0, 0xf8,
  0x1e, 0x00, 0x00, 0x00, 0xf8, 0x7d, 0xe0, 0x78,
  0x00, 0x00, 0x00, 0x00, 0xf0, 0x3d, 0xe0, 0x78,
  0x00, 0x00, 0x00, 0x00, 0xf0, 0x3d, 0xe0, 0x78,
  0x00, 0x00, 0x00, 0x00, 0xf0, 0x3d, 0xe0, 0x78,
  0x00, 0x00, 0x00, 0x00, 0xf0, 0x3d, 0xe0, 0x78,
  0x00, 0x00, 0x00, 0x00, 0xf0, 0x3d, 0xe0, 0x78,
  0x00, 0x00, 0x00, 0x00, 0xf0, 0x3d, 0xe0, 0x78,
  0x00, 0x00, 0x00, 0x00, 0xf8, 0x79, 0xf0, 0xf8,
  0x00, 0x00, 0x00, 0x00, 0xff, 0xf8, 0xff, 0xf8,
  0x00, 0x00, 0x00, 0x00, 0x3f, 0xf0, 0x7f, 0xf8,
  0x00, 0x00, 0x00, 0x00, 0x0f, 0xe0, 0x3f, 0xf8,
  0x00, 0x00, 0x00, 0x00, 0x03, 0x80, 0x0e, 0x78,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x78,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x78,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x78,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x78,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x78,
};
