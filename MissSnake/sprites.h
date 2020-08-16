#pragma once

//display resolution 128x64

static const uint8_t SPRITE_SIZE = 4;

PROGMEM const uint8_t foodSprite[] = {
  
  0b00000110,
  0b00001111,
  0b00001111,
  0b00000110
};


PROGMEM const uint8_t snakeSprite[] = {
  
  0b00001111,
  0b00001111,
  0b00001111,
  0b00001111
};


PROGMEM const uint8_t titleSprite[] =
{
  // 56, 41
  0x00, 0x00, 0x00, 0xc0, 0xfc, 0xfc, 0xf0, 0x00, 
  0x00, 0x00, 0x00, 0xf0, 0xfc, 0x1e, 0x00, 0x00, 
  0xf0, 0xf0, 0x60, 0x00, 0x00, 0x80, 0xe0, 0x60, 
  0x60, 0x60, 0xe0, 0x00, 0x00, 0x80, 0x80, 0x80, 
  0x80, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0x07, 0x0e, 
  0x1c, 0x9c, 0x8e, 0xbf, 0xff, 0xfe, 0x00, 0x3f, 
  0xff, 0xff, 0xf0, 0x00, 0x07, 0x0f, 0x1f, 0xfc, 
  0xf8, 0xe0, 0x00, 0x1c, 0x3e, 0x7f, 0xf1, 0xe1, 
  0x81, 0x03, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x3c, 0x1f, 0x0f, 0x03, 0xf8, 0xfe, 
  0xff, 0xe7, 0xc1, 0x81, 0x03, 0x03, 0x00, 0x0c, 
  0x0f, 0x07, 0x00, 0x00, 0x0c, 0x1c, 0x0e, 0x0f, 
  0x07, 0x80, 0x90, 0x30, 0x30, 0x98, 0x9f, 0x0f, 
  0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0xf0, 0xf0, 0x00, 0x00, 0x80, 0xc0, 0x40, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x81, 
  0x81, 0xc3, 0xe3, 0xff, 0x7f, 0x3e, 0x18, 0x00, 
  0x80, 0xf0, 0x3f, 0xcf, 0xfc, 0x00, 0x80, 0xfc, 
  0x7f, 0x07, 0x03, 0x80, 0xfc, 0xff, 0xc1, 0xe7, 
  0x6e, 0x7c, 0xf0, 0xc0, 0x00, 0x00, 0x00, 0xf8, 
  0xff, 0x1f, 0xf8, 0xec, 0x86, 0x03, 0x01, 0xf0, 
  0xf8, 0x3c, 0x3c, 0x1c, 0x0c, 0x04, 0x00, 0x00, 
  0x00, 0xc0, 0x60, 0x70, 0x3e, 0x1f, 0x07, 0x07, 
  0x07, 0x03, 0x01, 0x00, 0x00, 0x00, 0x3c, 0x3e, 
  0x1f, 0x0f, 0x00, 0x0f, 0x1f, 0x1e, 0x07, 0x01, 
  0x00, 0x00, 0x3c, 0x3f, 0x1f, 0x01, 0x01, 0x00, 
  0x00, 0x00, 0x07, 0x07, 0x00, 0x38, 0x1f, 0x07, 
  0x00, 0x00, 0x00, 0x03, 0x1f, 0x3e, 0x70, 0x07, 
  0x7f, 0x7f, 0x73, 0x71, 0x30, 0x20, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
};

PROGMEM const uint8_t titleSprite1[] = 
{
  // 52, 64
  0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0xc0, 0xc0, 
  0xe0, 0xf0, 0xf0, 0xf0, 0xf0, 0xe0, 0xe0, 0xc0, 
  0xc0, 0x80, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x80, 0xc0, 0xf0, 0xf8, 0xfc, 
  0xfc, 0xfc, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0x3c, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x07, 0x1f, 0x1f, 0x7f, 0xff, 0xff, 0xfe, 
  0xfc, 0xf9, 0xfb, 0xf7, 0xe7, 0xcf, 0xdf, 0x1f, 
  0x1f, 0x9e, 0xc8, 0xe0, 0xf8, 0x38, 0xc4, 0xcf, 
  0xef, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0xf8, 0xf0, 0xc0, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x0f, 0x1f, 0xff, 0xdf, 0x9f, 0x3f, 0xdf, 0xdf, 
  0xdf, 0xff, 0xe0, 0xee, 0xee, 0xff, 0xff, 0xff, 
  0xfc, 0x63, 0x0f, 0xdf, 0xef, 0xe7, 0xf7, 0xf7, 
  0xf7, 0xf7, 0xe7, 0xef, 0xef, 0xff, 0xdf, 0xbf, 
  0x7f, 0xff, 0xcf, 0x00, 0x80, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x40, 0x40, 
  0x80, 0x00, 0x00, 0x00, 0x5f, 0xbf, 0xff, 0xdf, 
  0xdf, 0x3e, 0xf0, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xfc, 0xff, 0x1f, 
  0xc7, 0xfb, 0x7d, 0x3f, 0xbf, 0xbf, 0xfe, 0xde, 
  0xdf, 0xcd, 0xe3, 0xe9, 0xcc, 0x07, 0xe9, 0xe7, 
  0xe5, 0x86, 0x86, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x7e, 0x7e, 
  0xfc, 0xfd, 0xff, 0x3b, 0x13, 0x37, 0x61, 0x0f, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0x7f, 0x7f, 0x7f, 
  0xff, 0xff, 0xff, 0xf0, 0x03, 0xfd, 0xfe, 0xff, 
  0x87, 0x87, 0x03, 0x01, 0x01, 0x01, 0x03, 0x83, 
  0xcf, 0x50, 0x6f, 0xef, 0xef, 0xdf, 0xdf, 0xe0, 
  0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x18, 0x3c, 0xfc, 0xfc, 0xdf, 0xcb, 0xe7, 0xe8, 
  0xe8, 0xf0, 0xf8, 0xe8, 0xef, 0xed, 0xec, 0xee, 
  0xee, 0xce, 0x9f, 0x3e, 0x7e, 0xfe, 0xfc, 0xfd, 
  0xff, 0xf8, 0xff, 0x7f, 0x37, 0x37, 0x97, 0xcc, 
  0xe0, 0x34, 0x1b, 0x09, 0x0d, 0x07, 0x06, 0x06, 
  0x07, 0x03, 0x03, 0x01, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x7f, 0xff, 0xff, 0xff, 
  0x7f, 0x7c, 0x3c, 0x9f, 0xdf, 0xdf, 0xdf, 0x9f, 
  0x3f, 0x7f, 0x7c, 0xfc, 0xfc, 0xff, 0xff, 0xff, 
  0x60, 0x67, 0x3f, 0x9f, 0x47, 0x21, 0x98, 0xe6, 
  0xf1, 0xf1, 0xfd, 0x01, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x38, 0x4e, 0x3f, 
  0x01, 0x00, 0x00, 0x06, 0x0c, 0x08, 0xc8, 0x09, 
  0x09, 0xe9, 0xe5, 0xf4, 0xf6, 0xfa, 0xf9, 0xfd, 
  0xfe, 0xff, 0x01, 0xff, 0xff, 0xff, 0xff, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
};


PROGMEM const uint8_t titleSprite2[] =
{
  // 52, 64
  0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0xc0, 0xc0, 
  0xe0, 0xf0, 0xf0, 0xf0, 0xf0, 0xe0, 0xe0, 0xc0, 
  0xc0, 0x80, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x80, 0xc0, 0xf0, 0xf8, 0xfc, 
  0xfc, 0xfc, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0x3c, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x07, 0x1f, 0x1f, 0x7f, 0xff, 0xff, 0xfe, 
  0xfc, 0xf9, 0xfb, 0xf7, 0xe7, 0xcf, 0xdf, 0x1f, 
  0x1f, 0x9e, 0xc8, 0xe0, 0xf8, 0x38, 0xc4, 0xcf, 
  0xef, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0xf8, 0xf0, 0xc0, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x0f, 0x1f, 0xff, 0xdf, 0x9f, 0x3f, 0xdf, 0xdf, 
  0xdf, 0xff, 0xe0, 0xee, 0xee, 0xff, 0xff, 0xff, 
  0xfc, 0x63, 0x0f, 0xdf, 0xef, 0xe7, 0xf7, 0xf7, 
  0xf7, 0xf7, 0xe7, 0xef, 0xef, 0xff, 0xdf, 0xbf, 
  0x7f, 0xff, 0x0f, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x1f, 0xbf, 0xff, 0xdf, 
  0xdf, 0x3e, 0xf0, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xfc, 0xff, 0x1f, 
  0xc7, 0xfb, 0xfd, 0xff, 0xff, 0xff, 0xfe, 0xfe, 
  0xff, 0xfd, 0xfb, 0xef, 0xdc, 0x3f, 0x78, 0xa0, 
  0x20, 0x80, 0x80, 0x20, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x20, 0x20, 0x40, 0x10, 0x20, 0x5c, 0x5c, 
  0x3e, 0x7f, 0xff, 0xff, 0x7f, 0xff, 0x61, 0x0f, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0x7f, 0x7f, 0x7f, 
  0xff, 0xff, 0xff, 0xf0, 0x0f, 0xdf, 0xdf, 0xdf, 
  0xbf, 0xbf, 0x3f, 0x1f, 0x1f, 0x2f, 0x2f, 0xa7, 
  0xd7, 0x51, 0x69, 0xe2, 0xe8, 0xdf, 0xdf, 0xe0, 
  0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x18, 0x3c, 0xfc, 0xfc, 0xdf, 0xcb, 0xe6, 0xe8, 
  0xe8, 0xf0, 0xf8, 0xe8, 0xef, 0xed, 0xec, 0xee, 
  0xee, 0xce, 0x9f, 0x3e, 0x7e, 0xfe, 0xfc, 0xfd, 
  0xff, 0xf8, 0xff, 0x7f, 0x37, 0x37, 0x97, 0xcc, 
  0x60, 0x34, 0x1b, 0x09, 0x0d, 0x07, 0x06, 0x06, 
  0x07, 0x03, 0x03, 0x01, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x7f, 0xff, 0xff, 0xff, 
  0x7f, 0x7c, 0x3c, 0x9f, 0xdf, 0xdf, 0xdf, 0x9f, 
  0x3f, 0x7f, 0x7c, 0xfc, 0xfc, 0xff, 0xff, 0xff, 
  0x60, 0x67, 0xbf, 0xdf, 0xe7, 0xe1, 0x04, 0xf2, 
  0xf9, 0xf9, 0xfc, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 
  0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0xfe, 0x00, 
  0x00, 0xff, 0xff, 0xfe, 0xff, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0x00, 0xff, 0xff, 0xff, 0xff, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
};

PROGMEM const uint8_t gameoverSprite[] =
{
  // 116, 16
  0xf0, 0xf0, 0xfc, 0xfc, 0x0f, 0x0f, 0xcf, 0xcf, 
  0xcf, 0xcf, 0xcf, 0xcf, 0x00, 0x00, 0x00, 0xf0, 
  0xf0, 0xfc, 0xfc, 0x0f, 0x0f, 0x0f, 0x0f, 0x0f, 
  0x0f, 0xfc, 0xfc, 0xf0, 0xf0, 0x00, 0xfc, 0xfc, 
  0xff, 0xff, 0x3c, 0x3c, 0xf0, 0xf0, 0x3c, 0x3c, 
  0xff, 0xff, 0xfc, 0xfc, 0x00, 0xfc, 0xfc, 0xff, 
  0xff, 0xcf, 0xcf, 0xcf, 0xcf, 0xcf, 0xcf, 0x0f, 
  0x0f, 0x00, 0x00, 0x00, 0x00, 0xf0, 0xf0, 0xfc, 
  0xfc, 0x1f, 0x0f, 0x0f, 0x0f, 0x0f, 0x1f, 0xfc, 
  0xfc, 0xf0, 0xf0, 0x00, 0xff, 0xff, 0xfc, 0xfc, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xfc, 0xfc, 
  0xff, 0xff, 0x00, 0xfc, 0xfc, 0xff, 0xff, 0xcf, 
  0xcf, 0xcf, 0xcf, 0xcf, 0xcf, 0x0f, 0x0f, 0x00, 
  0xfc, 0xfc, 0xff, 0xff, 0x0f, 0x0f, 0x0f, 0x0f, 
  0xff, 0xff, 0xfc, 0xfc, 0x0f, 0x0f, 0x3f, 0x3f, 
  0xf0, 0xf0, 0xf3, 0xf3, 0xf3, 0xf3, 0xff, 0xff, 
  0x3f, 0x3f, 0x00, 0xff, 0xff, 0xff, 0xff, 0x0f, 
  0x0f, 0x0f, 0x0f, 0x0f, 0x0f, 0xff, 0xff, 0xff, 
  0xff, 0x00, 0xff, 0xff, 0xff, 0xff, 0x00, 0x00, 
  0x03, 0x03, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 
  0x00, 0x3f, 0x3f, 0xff, 0xff, 0xf3, 0xf3, 0xf3, 
  0xf3, 0xf3, 0xf3, 0xf0, 0xf0, 0x00, 0x00, 0x00, 
  0x00, 0x0f, 0x0f, 0x3f, 0x3f, 0xf8, 0xf0, 0xf0, 
  0xf0, 0xf0, 0xf8, 0x3f, 0x3f, 0x0f, 0x0f, 0x00, 
  0x03, 0x03, 0x0f, 0x0f, 0x3f, 0x3f, 0xfc, 0xfc, 
  0x3f, 0x3f, 0x0f, 0x0f, 0x03, 0x03, 0x00, 0x3f, 
  0x3f, 0xff, 0xff, 0xf3, 0xf3, 0xf3, 0xf3, 0xf3, 
  0xf3, 0xf0, 0xf0, 0x00, 0xff, 0xff, 0xff, 0xff, 
  0x0f, 0x0f, 0x0f, 0x0f, 0xff, 0xf8, 0xf8, 0xf8,  
};


PROGMEM const uint8_t highscoreSprite[] =
{
  // 40, 6
  0x3f, 0x04, 0x04, 0x3f, 0x00, 0x3e, 0x00, 0x1c, 
  0x22, 0x2a, 0x3a, 0x00, 0x3e, 0x08, 0x08, 0x3e, 
  0x00, 0x00, 0x26, 0x29, 0x29, 0x10, 0x00, 0x1c, 
  0x22, 0x22, 0x00, 0x1c, 0x22, 0x22, 0x1c, 0x00, 
  0x3e, 0x0a, 0x0a, 0x34, 0x00, 0x3e, 0x2a, 0x22, 
};

PROGMEM const uint8_t newhighscoreSprite[] =
{
  // 61, 6
  0x3f, 0x02, 0x04, 0x3f, 0x00, 0x3e, 0x2a, 0x22, 
  0x00, 0x0e, 0x30, 0x08, 0x30, 0x0e, 0x00, 0x00, 
  0x3f, 0x04, 0x04, 0x3f, 0x00, 0x3e, 0x00, 0x1c, 
  0x22, 0x2a, 0x3a, 0x00, 0x3e, 0x08, 0x08, 0x3e, 
  0x00, 0x00, 0x26, 0x29, 0x29, 0x10, 0x00, 0x1c, 
  0x22, 0x22, 0x00, 0x1c, 0x22, 0x22, 0x1c, 0x00, 
  0x3e, 0x0a, 0x0a, 0x34, 0x00, 0x3e, 0x2a, 0x22, 
  0x00, 0x00, 0x2f, 0x00, 0x2f, 
};

/*
PROGMEM const uint8_t muteSprite[] =
{
  // 13, 10
  0x78, 0x78, 0x84, 0x86, 0x03, 0xff, 0x00, 0x00, 
  0x88, 0x50, 0x20, 0x50, 0x88, 0x00, 0x00, 0x00, 
  0x01, 0x03, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 
};
*/

PROGMEM const uint8_t muteSprite[] =
{

  // 11, 7
  0x1c, 0x1c, 0x22, 0x41, 0x7f, 0x00, 0x22, 0x14, 
  0x08, 0x14, 0x22,
}; 
