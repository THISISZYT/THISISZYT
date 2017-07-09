#include <LiquidCrystal.h>
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

int count=15;
void setup() {

  lcd.begin(16, 2);
  lcd.setCursor(2, 0);
  lcd.print("Whac-A-Mole");
}

void loop() {
    lcd.setCursor(7, 1);
lcd.blink();
lcd.cursor();


 lcd.print(count);
}
