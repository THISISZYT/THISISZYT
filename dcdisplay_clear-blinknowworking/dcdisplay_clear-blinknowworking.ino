#include <LiquidCrystal.h>
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

int count=15;
void setup() {

  lcd.begin(16, 2);

  lcd.print("hello, world!");
}

void loop() {
    lcd.setCursor(0, 1);
lcd.print("gogogogo");
   lcd.cursor();
    lcd.blink();



 
delay (2000);



}
