;--------------------------------------------------------
; File Created by SDCC : free open source ANSI-C Compiler
; Version 3.6.8 #9946 (Linux)
;--------------------------------------------------------
	.module face
	.optsdcc -mz80
	
;--------------------------------------------------------
; Public variables in this module
;--------------------------------------------------------
	.globl _pre_face
	.globl _pre_tileset
	.globl _pre_palette
;--------------------------------------------------------
; special function registers
;--------------------------------------------------------
;--------------------------------------------------------
; ram data
;--------------------------------------------------------
	.area _DATA
;--------------------------------------------------------
; ram data
;--------------------------------------------------------
	.area _INITIALIZED
;--------------------------------------------------------
; absolute external ram data
;--------------------------------------------------------
	.area _DABS (ABS)
;--------------------------------------------------------
; global & static initialisations
;--------------------------------------------------------
	.area _HOME
	.area _GSINIT
	.area _GSFINAL
	.area _GSINIT
;--------------------------------------------------------
; Home
;--------------------------------------------------------
	.area _HOME
	.area _HOME
;--------------------------------------------------------
; code
;--------------------------------------------------------
	.area _CODE
	.area _CODE
_pre_palette:
	.db #0x44	; 68	'D'
	.db #0x55	; 85	'U'
	.db #0x5c	; 92
	.db #0x58	; 88	'X'
	.db #0x5d	; 93
	.db #0x56	; 86	'V'
	.db #0x46	; 70	'F'
	.db #0x57	; 87	'W'
	.db #0x5f	; 95
	.db #0x4e	; 78	'N'
	.db #0x47	; 71	'G'
	.db #0x42	; 66	'B'
	.db #0x59	; 89	'Y'
	.db #0x5b	; 91
	.db #0x43	; 67	'C'
	.db #0x4b	; 75	'K'
_pre_tileset:
	.dw _pre_face
_pre_face:
	.db #0x46	; 70	'F'
	.db #0xcc	; 204
	.db #0xcc	; 204
	.db #0x89	; 137
	.db #0x8d	; 141
	.db #0x0f	; 15
	.db #0x0f	; 15
	.db #0x4e	; 78	'N'
	.db #0xdd	; 221
	.db #0xaf	; 175
	.db #0xff	; 255
	.db #0x4e	; 78	'N'
	.db #0xdd	; 221
	.db #0x05	; 5
	.db #0xaa	; 170
	.db #0x4e	; 78	'N'
	.db #0x8d	; 141
	.db #0x0f	; 15
	.db #0x0f	; 15
	.db #0x4e	; 78	'N'
	.db #0x8d	; 141
	.db #0x0a	; 10
	.db #0x05	; 5
	.db #0x4e	; 78	'N'
	.db #0x8d	; 141
	.db #0x0f	; 15
	.db #0x0f	; 15
	.db #0x4e	; 78	'N'
	.db #0x46	; 70	'F'
	.db #0xcc	; 204
	.db #0xcc	; 204
	.db #0x89	; 137
	.area _INITIALIZER
	.area _CABS (ABS)
