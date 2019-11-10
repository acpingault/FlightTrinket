// Using Trinket Dot Star LED to show status

#include <Adafruit_DotStar.h>

#define NUMPIXELS 1 

#define DATAPIN    7
#define CLOCKPIN   8

Adafruit_DotStar strip(NUMPIXELS, DATAPIN, CLOCKPIN, DOTSTAR_BRG);

void setup() {
  strip.begin(); // Initialize pins for output
  strip.setBrightness(100);
  strip.show();  // Turn all LEDs off ASAP
}

void loop() {
  showColor(65000);
}


void showColor(int color) {
    strip.setPixelColor(0, strip.gamma32(strip.ColorHSV(color)));
    strip.show(); // Update strip with new contents  
}
