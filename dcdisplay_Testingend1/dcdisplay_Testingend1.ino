#include <LiquidCrystal.h>
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);
byte heart[8]={
  B00000,
  B00000,
  B00000,
  B01010,
  B11111,
  B01110,
  B00100};
  
void setup() 
{

  lcd.begin(16, 2);
lcd.createChar(1,heart);
lcd.setCursor(2, 0);// right in der Mittle
    lcd.print("Whac-A-Mole!");
    delay(3000);
    lcd.clear();
  
}

void loop() {
    lcd.setCursor(0, 0);
    lcd.print("Send love!");
    lcd.setCursor(11, 0);
    lcd.createChar(1,heart);
    
    lcd.setCursor(0, 1);
    lcd.print("Cursor:");
    lcd.setCursor(7, 1);
    lcd.cursor();
    lcd.blink();
    

    


}
