
int LED_1 = 4;
int LED_2 = 5;
int LED_3 = 6;

long randomNumber;

void setup() {
 Serial.begin(9600);
  // put your setup code here, to run once:
pinMode(LED_1,OUTPUT);
pinMode(LED_2,OUTPUT);
pinMode(LED_3,OUTPUT);

randomSeed(analogRead(0));
}

void loop() {
 randomNumber = random(5,8);
  Serial.println(randomNumber);
  digitalWrite(randomNumber,HIGH);
  delay(500);
  digitalWrite(randomNumber,LOW);
  delay(50);

}
