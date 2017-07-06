int bewegung=6;
int bewegungsstatus=0;
int LED= 8;


void setup() {
  pinMode(bewegung,INPUT);
  pinMode(LED,OUTPUT);

}

void loop() {
 bewegungsstatus= digitalRead(bewegung);
 if (bewegungsstatus == HIGH){
  digitalWrite(LED,HIGH);

  }
  else
  {
    digitalWrite(LED,LOW);
    
    }
}
