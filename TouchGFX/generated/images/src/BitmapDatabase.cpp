// 4.19.1 0xc1572e3f
// Generated by imageconverter. Please, do not edit!

#include <BitmapDatabase.hpp>
#include <touchgfx/Bitmap.hpp>

extern const unsigned char image_blue_backgrounds_main_bg_800x480px[]; // BITMAP_BLUE_BACKGROUNDS_MAIN_BG_800X480PX_ID = 0, Size: 800x480 pixels

const touchgfx::Bitmap::BitmapData bitmap_database[] = {
    { image_blue_backgrounds_main_bg_800x480px, 0, 800, 480, 0, 0, 800, ((uint8_t)touchgfx::Bitmap::RGB565) >> 3, 480, ((uint8_t)touchgfx::Bitmap::RGB565) & 0x7 }
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
