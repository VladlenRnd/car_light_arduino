#include <Arduino.h>
#include <Adafruit_NeoPixel.h>

#define LED 13
#define LED_COUNT 6
#define LED_PIN 5

Adafruit_NeoPixel strip = Adafruit_NeoPixel(LED_COUNT, LED_PIN, NEO_GRB + NEO_KHZ800);

void offLed()
{
  strip.setPixelColor(1, strip.Color(0, 0, 0));
  strip.setPixelColor(0, strip.Color(0, 0, 0));
  strip.show();
}

void setup()
{
  strip.begin();
  Serial.begin(9600);
  pinMode(LED, OUTPUT);
}

void loop()
{

  if (Serial.available() > 0)
  {
    int incomingByte = Serial.read();

    if (incomingByte == '1')
    {
      digitalWrite(LED, HIGH);
    }

    if (incomingByte == '2')
    {
    }
    if (incomingByte == '3')
    {
    }
  }
}
