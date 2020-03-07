#include <header/prototype.h>

String getValue(String data, char separator, int index)
{
    int found = 0;
    int strIndex[] = {0, -1};
    int maxIndex = data.length() - 1;

    for (int i = 0; i <= maxIndex && found <= index; i++)
    {
        if (data.charAt(i) == separator || i == maxIndex)
        {
            found++;
            strIndex[0] = strIndex[1] + 1;
            strIndex[1] = (i == maxIndex) ? i + 1 : i;
        }
    }

    return found > index ? data.substring(strIndex[0], strIndex[1]) : "";
}

void modeLed(int Code, String string)
{
    switch (Code)
    {
    case 0:
        showAllLed(getValue(string, ',', 1).toInt(), getValue(string, ',', 2).toInt(), getValue(string, ',', 3).toInt());
        break;
    case 1:
        //TODO add mode
        break;
    case 2:
        //TODO add mode
        break;
    case 3:
        //TODO add mode
        break;

    default:
        break;
    }
}