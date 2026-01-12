#ifndef Pins_Arduino_h
#define Pins_Arduino_h

#include "soc/soc_caps.h"
#include <stdint.h>

static const uint8_t TX = 43;
static const uint8_t RX = 44;

static const uint8_t SDA = 8;
static const uint8_t SCL = 9;

static const uint8_t SS = 10;
static const uint8_t MOSI = 11;
static const uint8_t MISO = 13;
static const uint8_t SCK = 12;

#define HAS_RGB_LED 1
#define LED_ORDER GRB
#define LED_TYPE_IS_RGBW 1
#define LED_COUNT 1
#define LED_TYPE WS2812
#define LED_COLOR_STEP 15
#define RGB_LED 45

/* Communication Buses*/
#define SERIAL_RX 2
#define SERIAL_TX 3
#define BAD_RX SERIAL_RX
#define BAD_TX SERIAL_TX
#define USB_as_HID 1

// SPI
#define SPI_SCK_PIN 13
#define SPI_MOSI_PIN 12
#define SPI_MISO_PIN 11
#define SPI_SS_PIN 43

// I2C
#define GROVE_SDA 4
#define GROVE_SCL 5

/* TFT definitions */
#define HAS_SCREEN 1
#define ROTATION 1
#define MINBRIGHT (uint8_t)1
#define USER_SETUP_LOADED 1

/* ---------------------   */
// Setup for ILI9341 320x240 (no touch)

#define ILI9341_DRIVER 1
#define TFT_HEIGHT 320
#define TFT_WIDTH 240

/* ---------------------   */
// Common TFT definitions
#define TFT_BACKLIGHT_ON 1
#define TFT_BL -1
#define TFT_RST 21
#define TFT_DC 47
#define TFT_MISO 46 // set to share SPI with other devices
#define TFT_MOSI 45
#define TFT_SCLK 3
#define TFT_CS 14
#define TOUCH_CS 1
#define HAS_TOUCH 1
#define SMOOTH_FONT 1
#define SPI_FREQUENCY 20000000
#define SPI_READ_FREQUENCY 20000000
#define SPI_TOUCH_FREQUENCY 2500000

// InfraRed
#define RXLED 26
#define TXLED 3
#define LED_ON HIGH
#define LED_OFF LOW
// SDCard
#define SDCARD_CS 10
#define SDCARD_SCK SPI_SCK_PIN
#define SDCARD_MISO SPI_MISO_PIN
#define SDCARD_MOSI SPI_MOSI_PIN
// CC1101
#define CC1101_GDO0_PIN 8
#define CC1101_SS_PIN 9
#define CC1101_MOSI_PIN SPI_MOSI_PIN
#define CC1101_SCK_PIN SPI_SCK_PIN
#define CC1101_MISO_PIN SPI_MISO_PIN
// NRF24
#define NRF24_CE_PIN 8
#define NRF24_SS_PIN 9
#define NRF24_MOSI_PIN SPI_MOSI_PIN
#define NRF24_SCK_PIN SPI_SCK_PIN
#define NRF24_MISO_PIN SPI_MISO_PIN

#endif /* Pins_Arduino_h */
