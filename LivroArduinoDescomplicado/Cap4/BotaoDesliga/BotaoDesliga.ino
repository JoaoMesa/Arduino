int LED = 13;
int BUTTON = 2;
int estado = LOW;

void setup() {
  pinMode(LED, OUTPUT);
  pinMode(BUTTON, INPUT);
}

void loop() {
  int estado = digitalRead(BUTTON);
  if(estado == HIGH){
    digitalWrite(LED, LOW);
  }
  else{
    digitalWrite(LED, HIGH);
  }
  delay(100);
}
