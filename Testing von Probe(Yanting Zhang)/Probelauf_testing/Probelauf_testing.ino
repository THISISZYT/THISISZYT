#include <LiquidCrystal.h>
#include <Probe.h>
#define TEST
#include <testDefinitionen.h>


LiquidCrystal lcd(53, 51, 47, 43, 39, 35);
Probe probe; //Klasse einfuegen

int LED1 = 2;
int Button1 = 6;
unsigned long minutes = 60000;

int count = 0;
int buttonState = 0;
int prebuttonState = 0;

void setup() {
  Serial.begin(9600);
  lcd.begin(16, 2);

  RUNTEST

  pinMode(LED1, INPUT);
  
  pinMode(Button1, OUTPUT);
  
  

void loop()
{
   digitalWrite(LED1,HIGH);
    LED();          //einzelne LED testing
    
  if (millis() < minutes * 1) {
     
       button1();         //einzelne Button testing
        if (buttonState != prebuttonState)
      {
        if (buttonState == LOW)
        {
          count = count + 1;
        }
      }

      prebuttonState = buttonState;
    

  
    delay(200);

  }


  else {
    counting(count);// test counting
  }
}
