#include <LiquidCrystal.h>

LiquidCrystal lcd(/*rs*/, /*enable*/, /*d4*/, /*d5*/, /*d6*/, /*d7*/);

void setup()
{
    lcd.begin(/*columns*/, /*rows*/);

    lcd.setCursor(/*column*/, /*row*/);
    lcd.print(/*text*/);
}

void loop()
{
    // update display

}
