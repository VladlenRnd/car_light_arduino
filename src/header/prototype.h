#include <Arduino.h>
#include <Adafruit_NeoPixel.h>

#define LED_COUNT 6
#define LED_PIN 5

extern Adafruit_NeoPixel strip;

String getValue(String, char, int);
void showAllLed(int, int, int);
void modeLed(int, String);