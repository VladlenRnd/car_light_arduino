#include <Arduino.h>

#define PIN 3

// Подключаем библиотеку Adafruit NeoPixel.
#include <Adafruit_NeoPixel.h>

// Указываем, какое количество пикселей у нашей ленты.
#define LED_COUNT 6

// Указываем, к какому порту подключен вход ленты DIN.
#define LED_PIN 5

// Создаем переменную strip для управления нашей лентой.
Adafruit_NeoPixel strip = Adafruit_NeoPixel(LED_COUNT, LED_PIN, NEO_GRB + NEO_KHZ800);

int myColor = 0;

void offLed()
{
  strip.setPixelColor(1, strip.Color(0, 0, 0));
  strip.setPixelColor(0, strip.Color(0, 0, 0));
  strip.show();
}

void seLed(int ledPin)
{
  switch (ledPin)
  {
  case 0:
    strip.setPixelColor(0, strip.Color(255, 0, 0));
    strip.setPixelColor(1, strip.Color(255, 0, 0));
    break;
  case 1:
    strip.setPixelColor(0, strip.Color(0, 255, 0));
    strip.setPixelColor(1, strip.Color(0, 255, 0));
    break;
  case 2:
    strip.setPixelColor(0, strip.Color(0, 0, 255));
    strip.setPixelColor(1, strip.Color(0, 0, 255));

    break;

  default:
    break;
  }
  strip.show();
}

void setup()
{
  // Инициализируем ленту.
  strip.begin();

  Serial.begin(9600);
}

void loop()
{
  seLed(myColor);

  if (Serial.available() > 0)
  { //если есть доступные данные
    // считываем байт
    int incomingByte = Serial.read();
    if (incomingByte == 49)
    {
      myColor = 0;
    }

    if (incomingByte == 50)
    {
      myColor = 1;
    }
    if (incomingByte == 51)
    {
      myColor = 2;
    }
  }
}

//strip.setPixelColor(1, strip.Color(0, 255, 0)); // Красный цвет.

//    if (Serial.available() > 0) {  //если есть доступные данные
//        // считываем байт
//        int incomingByte = Serial.read();
//
//        if(incomingByte == 49)
//        {
//          digitalWrite(PIN,HIGH);
//        }
//
//        if(incomingByte == 50)
//        {
//          digitalWrite(PIN,LOW);
//        }
//    }

//digitalWrite(PIN,HIGH);
//delay(1000);
//digitalWrite(PIN,LOW);
//delay(1000);
//
//for(int i=0;i<5;i++)
//{
//  isLight();
//}
//

void isLight()
{
  digitalWrite(PIN, HIGH);
  delay(100);
  digitalWrite(PIN, LOW);
  delay(100);
}
