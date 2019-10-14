#include <Adafruit_NeoPixel.h>
#define PIN            9
#define NUMPIXELS      1
Adafruit_NeoPixel pixels = Adafruit_NeoPixel(NUMPIXELS, PIN, NEO_GRB + NEO_KHZ800);

void setup() 
{
  pinMode(13,OUTPUT);
  pixels.begin();
  pixels.show();
  pixels.show();
}
void loop() 
{
  digitalWrite(13,HIGH);
  pixels.setPixelColor(0,0,0,0);
  pixels.show();
  delay(300);
  digitalWrite(13,LOW);
  pixels.setPixelColor(0,55,0,0);
  pixels.show();
  delay(300);
}
