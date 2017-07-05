
int LED_1 = 4;
int LED_2 = 5;
int LED_3 = 6;

long count;

void setup() {
 Serial.begin(9600);
 
pinMode(LED_1,OUTPUT);
pinMode(LED_2,OUTPUT);
pinMode(LED_3,OUTPUT);

randomSeed(analogRead(0));
}

void loop() {
count = random(5,8);
  Serial.println(count);
  digitalWrite(count,HIGH);
  delay(500);
  digitalWrite(count,LOW);
  delay(10);

}
