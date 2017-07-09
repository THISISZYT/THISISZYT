#include <LiquidCrystal.h>
int LED1 =5;   
int LED2=6;
 int Button1 = 7; 
 int Button2 = 8;
LiquidCrystal lcd(53, 51, 47, 43, 39, 35);
 


static int count = 0;       //calculating
int buttonState = 0;  
int prebuttonState = 0;

void setup()   {                

 lcd.clear(); // initialize the dcplayer
 Serial.begin(9600);
  lcd.begin(16, 2);
    
 pinMode(LED1,  OUTPUT);
 pinMode(LED2, OUTPUT);
 pinMode(Button1,INPUT);
 pinMode(Button2,INPUT);
 
}

void loop() {

int A = random(5,7);
    digitalWrite(A,HIGH);//run random
   
 unsigned long apple = millis();
  while( millis()-apple < 3000){ 
    
   buttonState= digitalRead(A+2);
  if(buttonState != prebuttonState)
   {if (buttonState == LOW){
    count=count+1;
    lcd.clear();
    lcd.setCursor(6, 0);
 lcd.print(count);
    }}       prebuttonState= buttonState;   }            

digitalWrite(A,LOW);
 delay(200);     
}


  
