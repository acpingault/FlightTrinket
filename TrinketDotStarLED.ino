// An example demonstrating how to control the Adafruit Dot Star RGB LED
// included on board the ItsyBitsy M4 board.

#include <Adafruit_DotStar.h>

// There is only one pixel on the board
#define NUMPIXELS 1 

//Use these pin definitions for the ItsyBitsy M4
#define DATAPIN    7
#define CLOCKPIN   8

Adafruit_DotStar strip(NUMPIXELS, DATAPIN, CLOCKPIN, DOTSTAR_BRG);

void setup() {
  strip.begin(); // Initialize pins for output
  strip.setBrightness(100);
  strip.show();  // Turn all LEDs off ASAP
}

void loop() {
  showColor(65000);             // Flowing rainbow cycle along the whole strip
}


void showColor(int color) {
    strip.setPixelColor(0, strip.gamma32(strip.ColorHSV(color)));
    strip.show(); // Update strip with new contents  
}
