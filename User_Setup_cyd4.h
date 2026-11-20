// TFT_eSPI setup for the Hosyond / LCDwiki 4.0" ESP32-32E display (E32R40T)
// ST7796 panel, 320x480, XPT2046 resistive touch sharing the LCD's SPI bus.
// Replace Arduino/libraries/TFT_eSPI/User_Setup.h with this file
// (keep your old one as a backup - it's what the 2.8" CYD needs).

#define USER_SETUP_INFO "E32R40T 4.0in ESP32-32E ST7796"

// ---- Driver ----
#define ST7796_DRIVER
#define TFT_WIDTH  320
#define TFT_HEIGHT 480

// If red and blue are swapped, uncomment this:
// #define TFT_RGB_ORDER TFT_RGB
// If colours look like a photo negative (white background shows black), uncomment ONE of these:
// #define TFT_INVERSION_ON
// #define TFT_INVERSION_OFF

// ---- Pins (from LCDwiki pin table) ----
#define TFT_MISO 12   // shared with touch
#define TFT_MOSI 13   // shared with touch
#define TFT_SCLK 14   // shared with touch
#define TFT_CS   15
#define TFT_DC    2
#define TFT_RST  -1   // tied to the ESP32 EN/reset line

#define TFT_BL   27   // backlight (the 2.8" CYD uses 21 - this is why your screen was black)
#define TFT_BACKLIGHT_ON HIGH

#define TOUCH_CS 33   // enables TFT_eSPI's built-in XPT2046 touch support

// 12/13/14/15 are the ESP32's native HSPI pins; leaves VSPI free for the SD card
#define USE_HSPI_PORT

// ---- Fonts ----
#define LOAD_GLCD
#define LOAD_FONT2
#define LOAD_FONT4
#define LOAD_FONT6
#define LOAD_FONT7
#define LOAD_FONT8
#define LOAD_GFXFF
#define SMOOTH_FONT

// ---- SPI speeds ----
#define SPI_FREQUENCY       27000000   // can try 40000000 once everything works
#define SPI_READ_FREQUENCY  16000000
#define SPI_TOUCH_FREQUENCY  2500000
