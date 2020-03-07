#include <header/prototype.h>

void setup()
{
  strip.begin();
  Serial.begin(9600);
}

void loop()
{
  if (Serial.available() > 0)
  {
    String incomingByte = Serial.readString();

    String code = getValue(incomingByte, ',', 0);

    modeLed(code.toInt(), incomingByte);
  }
}
