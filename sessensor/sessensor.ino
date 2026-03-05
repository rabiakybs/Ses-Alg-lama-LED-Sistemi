int ledpin = 9;
int sensorpin = 8;

void setup() {
  pinMode(ledpin, OUTPUT);
  pinMode(sensorpin, INPUT);
}

void loop() {
  int sensordurum = digitalRead(sensorpin);

  if(sensordurum == HIGH){  // Ses algılandıysa
    digitalWrite(ledpin, HIGH);
  } else {                  // Ses yoksa
    digitalWrite(ledpin, LOW);
  }
}