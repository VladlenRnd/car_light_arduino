#include <header\prototype.h>

void showAllLed(int red, int green, int blue)
{
    //Section 1
    strip.setPixelColor(1, strip.Color(red, green, blue));
    strip.setPixelColor(0, strip.Color(red, green, blue));

    //Section 2
    strip.setPixelColor(2, strip.Color(red, green, blue));
    strip.setPixelColor(3, strip.Color(red, green, blue));
    strip.show();

    Serial.println(red);
    Serial.println(green);
    Serial.println(blue);
}