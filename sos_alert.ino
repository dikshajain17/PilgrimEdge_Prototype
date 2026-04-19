
int buttonPin = 2;
int ledPin = 13;

void setup() {
  pinMode(buttonPin, INPUT);
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  int state = digitalRead(buttonPin);

  if(state == HIGH){
    digitalWrite(ledPin, HIGH);
    Serial.println("SOS Triggered - Help Needed");
    delay(1000);
  } else {
    digitalWrite(ledPin, LOW);
  }
}

