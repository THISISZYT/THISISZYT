#include <LiquidCrystal.h>
int LED1 =5;   
int LED2=6;
 int Button1 = 7; 
 int Button2 = 8;
LiquidCrystal lcd(53, 51, 47, 43, 39, 35);
// LED connected to digital pin 13


static int count = 0;       // Our blink counter
int buttonState = 0;  
int prebuttonState = 0;
int A=0;

unsigned long minutes = 60000;




'

void setup()   {                
'
 lcd.clear();
 Serial.begin(9600);
  lcd.begin(16, 2);
    
 pinMode(LED1, OUTPUT);
 pinMode(LED2, OUTPUT);
 pinMode(Button1, INPUT);
 pinMode(Button2,  INPUT);
 
}

void loop() {

int A = random(5,7);
    digitalWrite(A,HIGH);
   
 unsigned long time = millis();
  while( millis()-time < 1500){ 
    
   buttonState= digitalRead(A+2);
  if(buttonState != prebuttonState)
   {if (buttonState == HIGH){
    count++;
    lcd.clear();
    lcd.setCursor(6, 0);
 lcd.print(count);
    }}        }            // wait for a second

digitalWrite(A,LOW);
    
   prebuttonState= buttonState;

   

 }


  
