// 4.18.1 0x3a2f60a9
// Generated by imageconverter. Please, do not edit!

#include <BitmapDatabase.hpp>
#include <touchgfx/Bitmap.hpp>

extern const unsigned char image_blue_buttons_round_edge_icon_button[]; // BITMAP_BLUE_BUTTONS_ROUND_EDGE_ICON_BUTTON_ID = 0, Size: 60x60 pixels
extern const unsigned char image_blue_buttons_round_edge_icon_button_pressed[]; // BITMAP_BLUE_BUTTONS_ROUND_EDGE_ICON_BUTTON_PRESSED_ID = 1, Size: 60x60 pixels
extern const unsigned char image_blue_buttons_round_edge_small[]; // BITMAP_BLUE_BUTTONS_ROUND_EDGE_SMALL_ID = 2, Size: 170x60 pixels
extern const unsigned char image_blue_buttons_round_edge_small_pressed[]; // BITMAP_BLUE_BUTTONS_ROUND_EDGE_SMALL_PRESSED_ID = 3, Size: 170x60 pixels
extern const unsigned char image_outline_backspace_black_18dp[]; // BITMAP_OUTLINE_BACKSPACE_BLACK_18DP_ID = 4, Size: 36x36 pixels
extern const unsigned char image_outline_call_black_18dp[]; // BITMAP_OUTLINE_CALL_BLACK_18DP_ID = 5, Size: 36x36 pixels
extern const unsigned char image_outline_phone_disabled_black_18dp[]; // BITMAP_OUTLINE_PHONE_DISABLED_BLACK_18DP_ID = 6, Size: 36x36 pixels
extern const unsigned char image_pika[]; // BITMAP_PIKA_ID = 7, Size: 256x256 pixels

const touchgfx::Bitmap::BitmapData bitmap_database[] = {
    { image_blue_buttons_round_edge_icon_button, 0, 60, 60, 7, 6, 46, ((uint8_t)touchgfx::Bitmap::ARGB8888) >> 3, 46, ((uint8_t)touchgfx::Bitmap::ARGB8888) & 0x7 },
    { image_blue_buttons_round_edge_icon_button_pressed, 0, 60, 60, 7, 6, 46, ((uint8_t)touchgfx::Bitmap::ARGB8888) >> 3, 46, ((uint8_t)touchgfx::Bitmap::ARGB8888) & 0x7 },
    { image_blue_buttons_round_edge_small, 0, 170, 60, 11, 4, 148, ((uint8_t)touchgfx::Bitmap::ARGB8888) >> 3, 50, ((uint8_t)touchgfx::Bitmap::ARGB8888) & 0x7 },
    { image_blue_buttons_round_edge_small_pressed, 0, 170, 60, 11, 4, 148, ((uint8_t)touchgfx::Bitmap::ARGB8888) >> 3, 50, ((uint8_t)touchgfx::Bitmap::ARGB8888) & 0x7 },
    { image_outline_backspace_black_18dp, 0, 36, 36, 33, 8, 3, ((uint8_t)touchgfx::Bitmap::ARGB8888) >> 3, 20, ((uint8_t)touchgfx::Bitmap::ARGB8888) & 0x7 },
    { image_outline_call_black_18dp, 0, 36, 36, 29, 24, 2, ((uint8_t)touchgfx::Bitmap::ARGB8888) >> 3, 7, ((uint8_t)touchgfx::Bitmap::ARGB8888) & 0x7 },
    { image_outline_phone_disabled_black_18dp, 0, 36, 36, 24, 5, 7, ((uint8_t)touchgfx::Bitmap::ARGB8888) >> 3, 2, ((uint8_t)touchgfx::Bitmap::ARGB8888) & 0x7 },
    { image_pika, 0, 256, 256, 0, 0, 256, ((uint8_t)touchgfx::Bitmap::RGB565) >> 3, 256, ((uint8_t)touchgfx::Bitmap::RGB565) & 0x7 }
};

namespace BitmapDatabase
{
const touchgfx::Bitmap::BitmapData* getInstance()
{
    return bitmap_database;
}

uint16_t getInstanceSize()
{
    return (uint16_t)(sizeof(bitmap_database) / sizeof(touchgfx::Bitmap::BitmapData));
}
} // namespace BitmapDatabase