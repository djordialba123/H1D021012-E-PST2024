#include <Arduino.h>
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27, 16, 2);
int SDA_pin = D4;
int SCL_pin = D3;

void setup()
{
  Wire.begin(SDA_pin, SCL_pin);
  lcd.begin(16, 2);
  lcd.init();
  lcd.backlight();
  lcd.setCursor(0, 0);
  lcd.print("ZAWARUDO");
  lcd.setCursor(0, 1);
  lcd.print("Tokiwa Tomare");
}

void loop()
{
}
