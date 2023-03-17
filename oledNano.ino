#include <SPI.h>
#include <Wire.h>
#include <SFE_MicroOLED.h>

#define PIN_RESET 9  // Connect RST to pin 9 (req. for SPI and I2C)
#define PIN_DC    8  // Connect DC to pin 8 (required for SPI)
#define PIN_CS    10 // Connect CS to pin 10 (required for SPI)


//#define DC_JUMPER 0 // Set to either 0 (default) or 1 based on jumper, matching the value of the DC Jumper
// Also connect pin 13 to SCK and pin 11 to MOSI

// Declare a MicroOLED object. The parameters include:
// 1 - Reset pin: Any digital pin
// 2 - D/C pin: Any digital pin (SPI mode only)
// 3 - CS pin: Any digital pin (SPI mode only, 10 recommended)

MicroOLED oled(PIN_RESET, PIN_DC, PIN_CS); //Example SPI declaration, comment out if using I2C

//MicroOLED oled(PIN_RESET, DC_JUMPER); //Example I2C declaration, uncomment if using I2C 

void setup()
{
    delay(100);
    //Wire.begin(); //set up I2C bus, uncomment if you are using I2C
    // Before you can start using the OLED, call begin() to init
    // all of the pins and configure the OLED.
    oled.begin();
    oled.display(); // Draw to the screen

}
void loop() {
  // put your main code here, to run repeatedly:

}
