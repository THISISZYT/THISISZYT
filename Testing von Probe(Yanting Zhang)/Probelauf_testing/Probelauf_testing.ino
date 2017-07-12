#include <LiquidCrystal.h>
#include <Probe.h>
#define TEST
#include <testDefinitionen.h>


LiquidCrystal lcd(53, 51, 47, 43, 39, 35);
Probe probe; //Klasse einfuegen

int LED1 = 2;
int Button1 = 6;
unsigned long minutes = 60000;

void setup() {
  Serial.begin(9600);
  lcd.begin(16, 2);

  RUNTEST

  pinMode(LED1, INPUT);//einzelne LED testing
  
  pinMode(Button1, OUTPUT);//einzelne Button testing
  
  

void loop()
{
    
  if (millis() < minutes * 1) {
    
        if (buttonState != prebuttonState)
      {
        if (buttonState == LOW)
        {
          count = count + 1;
        }
      }

      prebuttonState = buttonState;
    

    digitalWrite(A, LOW);
    delay(200);

  }


  else {
    zustand(count);// test counting
  }
}
