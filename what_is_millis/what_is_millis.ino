#include <LiquidCrystal.h>

LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

int A=8;


void setup() {
 lcd.begin(16,2);
pinMode(A,OUTPUT);
}

void loop() {
  while (millis()<5000){
    
     lcd.setCursor(0,0);
 lcd.print(millis()/1000);
    digitalWrite(A,HIGH);
   
    }
delay(200);

}
