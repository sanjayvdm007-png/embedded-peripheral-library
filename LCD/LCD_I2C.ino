#include <Wire.h>
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(/*address*/, /*columns*/, /*rows*/);

void setup()
{
    lcd.init();        // initialize LCD
    lcd.backlight();   // turn on backlight

    lcd.setCursor(/*column*/, /*row*/);
    lcd.print(/*text*/);
}

void loop()
{
    // update display

}
