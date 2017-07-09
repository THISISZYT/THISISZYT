#include <LiquidCrystal.h>
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

int count=15;
void setup() {

  lcd.begin(16, 2);

  lcd.print("hello, world!");
}

void loop() {
    lcd.setCursor(7, 1);
lcd.blink();
lcd.cursor();


 lcd.print(count);
}
