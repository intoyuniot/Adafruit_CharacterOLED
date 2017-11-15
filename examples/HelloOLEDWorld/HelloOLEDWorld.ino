/*
该例程展示如何使用华凌光电16*2 OLED模块显示.
类似但不完全兼容基于HITACHI HD44780 LCD显示屏.

该例程往OLED屏上打印"Hello OLED World"

电路连接如下:
 * LCD RS           D0
 * LCD R/W         D1
 * LCD Enable      D2
 * LCD D4           D3
 * LCD D5           D4
 * LCD D6           D5
 * LCD D7           D6
 */

#include <Adafruit_CharacterOLED.h>

// OLED_V1 = 旧版本, OLED_V2 = 新版本. If 2 不行,尝试 1
Adafruit_CharacterOLED lcd(OLED_V2, D0, D1, D2, D3, D4, D5, D6);

void setup()
{
  lcd.begin(16, 2);
  lcd.print("hello OLED World");
}

void loop()
{
  lcd.setCursor(0, 1);
  lcd.print(millis()/1000);
}
