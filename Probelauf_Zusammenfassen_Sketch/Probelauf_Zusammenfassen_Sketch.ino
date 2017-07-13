#include <LiquidCrystal.h>
LiquidCrystal lcd(53, 51, 47, 43, 39, 35);

int LED1 =2;   
int LED2=3;
int LED3=4;

 int Button1 = 6; 
 int Button2 = 7;
 int Button3 = 8;


static int count = 0;       // Our blink counter
int buttonState = 0;  
int prebuttonState = 0;

unsigned long minutes = 60000;



void setup()   {                
  Serial.begin(9600);
  lcd.begin(16, 2);
    
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
  pinMode(LED3, OUTPUT);
  pinMode(Button1, INPUT);
  pinMode(Button2,  INPUT); 
  pinMode(Button3,  INPUT);
  lcd.setCursor(0, 0);
lcd.print("Whac-A-Mole");
  delay(1000);   
}

void loop() 
{
     if (millis() < minutes * 1) {
           int A = random(2,5);
           digitalWrite(A,HIGH);
           unsigned long Time = millis();
             while( millis()-Time < 800){ 
                   buttonState= digitalRead(A+4);
                   
                        if(buttonState != prebuttonState){  
                           
                          if (buttonState == LOW){//Taste wird gedrückt und wieder losgelassen
         
                                count=count+1;    
                                lcd.setCursor(6, 1);
                                lcd.print(count);}
    

                    prebuttonState= buttonState; }      

           digitalWrite(A,LOW);
           delay(200);     }

     else {    
         lcd.setCursor(0, 0);
         lcd.print("Your Score is:");
         lcd.setCursor(6, 1);
         lcd.print(count);
 }
}
