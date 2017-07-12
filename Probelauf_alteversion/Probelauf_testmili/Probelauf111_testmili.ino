#include <LiquidCrystal.h>
int LED1 =8;   
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

void setup() {


 Serial.begin(9600);
  lcd.begin(16, 2);
 
pinMode (LED1,OUTPUT);
}

void loop() {
  unsigned long A = millis();
  while(millis()-A< 3000){
    digitalWrite(LED1,HIGH);
    }
    digitalWrite(LED1,LOW);
 
   lcd.setCursor(7, 1);
lcd.print(millis() / 1000);
    delay(200);  
}
