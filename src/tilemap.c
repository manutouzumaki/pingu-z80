#include "tilemap.h"
// Data created with Img2CPC - (c) Retroworks - 2007-2017
// Tile tile_tilemap_00: 8x8 pixels, 4x8 bytes.
const u8 tile_tilemap_00[4 * 8] = {
	0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff,
	0xff, 0xf6, 0xf9, 0xff,
	0xff, 0xf3, 0xf3, 0xff,
	0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff,
	0xff, 0xf3, 0xf3, 0xff,
	0xff, 0xf9, 0xf6, 0xff
};

// Tile tile_tilemap_01: 8x8 pixels, 4x8 bytes.
const u8 tile_tilemap_01[4 * 8] = {
	0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff,
	0xf3, 0xf7, 0xf3, 0xf3,
	0xff, 0xfb, 0xff, 0xf7,
	0xf9, 0xf9, 0xfc, 0xfc,
	0xf6, 0xfc, 0xfc, 0xfc,
	0xfc, 0xf3, 0xf9, 0xf6,
	0xfb, 0xf3, 0xf3, 0xf9
};

// Tile tile_tilemap_02: 8x8 pixels, 4x8 bytes.
const u8 tile_tilemap_02[4 * 8] = {
	0xfc, 0xfc, 0xfc, 0xfc,
	0xfc, 0xfc, 0xa8, 0xfc,
	0x00, 0x54, 0x00, 0x00,
	0x54, 0xa8, 0x00, 0x54,
	0x54, 0x00, 0xa8, 0x00,
	0x54, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00,
	0xa8, 0x00, 0x00, 0x54
};

// Tile tile_tilemap_03: 8x8 pixels, 4x8 bytes.
const u8 tile_tilemap_03[4 * 8] = {
	0x00, 0x00, 0xa8, 0x00,
	0x00, 0x00, 0x00, 0x00,
	0x00, 0x54, 0x00, 0x00,
	0xa8, 0x00, 0x00, 0x54,
	0xa8, 0x00, 0xa8, 0x00,
	0xa8, 0x00, 0xa8, 0x00,
	0x00, 0x00, 0x00, 0x00,
	0xa8, 0x00, 0x00, 0x54
};

// Tile tile_tilemap_04: 8x8 pixels, 4x8 bytes.
const u8 tile_tilemap_04[4 * 8] = {
	0x0e, 0x0e, 0x0e, 0x0e,
	0x0c, 0x0c, 0x0c, 0x0c,
	0x0f, 0x0f, 0x0f, 0x0f,
	0x0f, 0x0f, 0x0f, 0x0f,
	0x03, 0x03, 0x03, 0x03,
	0x03, 0x03, 0x03, 0x03,
	0x03, 0x03, 0x03, 0x03,
	0x0c, 0x0c, 0x0c, 0x0c
};

// Tile tile_tilemap_05: 8x8 pixels, 4x8 bytes.
const u8 tile_tilemap_05[4 * 8] = {
	0x03, 0x03, 0x03, 0x03,
	0x03, 0x23, 0x13, 0x03,
	0xcf, 0x9b, 0x67, 0xcf,
	0x8b, 0x33, 0x33, 0x47,
	0x16, 0xf0, 0xf0, 0x29,
	0x03, 0x3c, 0x3c, 0x03,
	0xf0, 0xf0, 0xf0, 0xf0,
	0xf0, 0xcf, 0xcf, 0xf0
};

// Tile tile_tilemap_06: 8x8 pixels, 4x8 bytes.
const u8 tile_tilemap_06[4 * 8] = {
	0x03, 0x13, 0xa1, 0x03,
	0x03, 0x23, 0x52, 0x03,
	0x03, 0x72, 0x72, 0x03,
	0x03, 0xa1, 0x52, 0x03,
	0x52, 0x72, 0x72, 0x23,
	0xa1, 0xb1, 0xb1, 0x13,
	0x03, 0xf0, 0xf0, 0x03,
	0x03, 0xb1, 0xb1, 0x03
};

// Tile tile_tilemap_07: 8x8 pixels, 4x8 bytes.
const u8 tile_tilemap_07[4 * 8] = {
	0x52, 0x72, 0x72, 0x23,
	0xa1, 0xf0, 0xf0, 0x52,
	0x72, 0x72, 0x72, 0x72,
	0xb1, 0xb1, 0xb1, 0xb1,
	0x03, 0x06, 0x09, 0x03,
	0x03, 0x09, 0x06, 0x03,
	0xf0, 0xf0, 0xf0, 0xf0,
	0xb1, 0xb1, 0xb1, 0xb1
};

// Tile tile_tilemap_08: 8x8 pixels, 4x8 bytes.
const u8 tile_tilemap_08[4 * 8] = {
	0x03, 0x03, 0x03, 0x03,
	0x03, 0x03, 0x03, 0x03,
	0x03, 0x03, 0x03, 0x03,
	0x03, 0x03, 0x03, 0x03,
	0x03, 0x03, 0x03, 0x03,
	0x03, 0x03, 0x03, 0x03,
	0x03, 0x03, 0x03, 0x03,
	0x03, 0x03, 0x03, 0x03
};

// Tile tile_tilemap_09: 8x8 pixels, 4x8 bytes.
const u8 tile_tilemap_09[4 * 8] = {
	0xc0, 0xc0, 0xf3, 0xc0,
	0xe2, 0xc0, 0xd1, 0xc0,
	0xd1, 0xe2, 0xc0, 0xc0,
	0xc0, 0xc0, 0xc0, 0xc0,
	0xc0, 0xc0, 0xd1, 0xe2,
	0xd1, 0xe2, 0xc0, 0xc0,
	0xc0, 0xc0, 0xc0, 0xc0,
	0xc0, 0xc0, 0xd1, 0xe2
};

// Tile tile_tilemap_10: 8x8 pixels, 4x8 bytes.
const u8 tile_tilemap_10[4 * 8] = {
	0xc0, 0xc0, 0xc0, 0xe2,
	0xe2, 0xc0, 0xe2, 0xc0,
	0xc0, 0xe2, 0xc0, 0xe2,
	0xe2, 0xc0, 0xe2, 0xc0,
	0xc0, 0xc0, 0xe2, 0xc0,
	0xc0, 0xe2, 0xc0, 0xc0,
	0xc0, 0xc0, 0xe2, 0xc0,
	0xc0, 0xe2, 0xe2, 0xc0
};

// Tile tile_tilemap_11: 8x8 pixels, 4x8 bytes.
const u8 tile_tilemap_11[4 * 8] = {
	0xc0, 0xc0, 0xc0, 0xe2,
	0xe2, 0xc0, 0xe2, 0xc0,
	0xc0, 0xe2, 0xc0, 0xe2,
	0xe2, 0xc0, 0xe2, 0xc0,
	0xff, 0xc0, 0xff, 0xd5,
	0xff, 0xff, 0xff, 0xff,
	0xea, 0xc0, 0xc0, 0xc0,
	0xc0, 0xc0, 0xe2, 0xc0
};

