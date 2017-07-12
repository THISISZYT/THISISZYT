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
  lcd.clear();
lcd.createChar(1,heart);
lcd.createChar(2,heart);
lcd.createChar(3,heart);
lcd.setCursor(2, 0);// right in der Mittle
    lcd.print("Whac-A-Mole!");
    delay(3000);//use as run-up time
    lcd.clear();
  
}

void loop() {
    lcd.setCursor(0, 0);
    lcd.print("Send Love--");
    lcd.setCursor(11, 0);
    lcd.write(1);
    lcd.setCursor(12, 0);
    lcd.write(1);
    lcd.setCursor(13, 0);
    lcd.write(1);
   
    
    lcd.setCursor(0, 1);
    lcd.print("Cursor:");
    lcd.setCursor(7, 1);
    lcd.cursor();
    lcd.blink();
    
    delay(2000);//to show "blink()" right
    // diese Programm wird benutzt, um alle Funktionen von lcdisplay zu testen


}
