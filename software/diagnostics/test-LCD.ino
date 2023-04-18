#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x27, 16, 2);

uint16_t var = 0;

void setup()
{
    lcd.init();
    lcd.backlight();
}

void loop()
{
    var++;
    lcd.clear();
    lcd.setCursor(0, 0);
    lcd.print("Counter:");
    lcd.setCursor(0, 1);
    lcd.print(var);
    delay(1000);
}
