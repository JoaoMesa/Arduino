int myLed = 13;

void setup() {
  // put your setup code here, to run once:
  pinMode(myLed, OUTPUT);
}

void loop() { 
  // put your main code here, to run repeatedly:
  for(int i = 0; i < 10; i++){
    digitalWrite(myLed, HIGH);
    if(i%2 == 0)
      delay(1000);
    else
      delay(100);
    digitalWrite(myLed, LOW);
      delay(100);
    }
}