int redLed = 9;
int greenLed = 8;

void setup() {
  // put your setup code here, to run once:
  pinMode(redLed, OUTPUT);
  pinMode(greenLed, OUTPUT);

}

void loop() { 
  // put your main code here, to run repeatedly:  
    digitalWrite(redLed, HIGH);
    delay(1000);
    digitalWrite(greenLed, HIGH);
    digitalWrite(redLed, LOW);
    delay(1000);
    digitalWrite(redLed, HIGH);
    delay(1000);
    digitalWrite(redLed, LOW);
    digitalWrite(greenLed, LOW);
    delay(500);
}