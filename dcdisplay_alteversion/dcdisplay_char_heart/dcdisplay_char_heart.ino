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
  
}

void loop() {  
 lcd.setCursor(0, 0);
 lcd.write(1);
 delay (3000);}
