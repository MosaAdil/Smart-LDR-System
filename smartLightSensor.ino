int LDRPin = A0;
int PotPin = A1;
float LDRRead;
float PotRead;
float delayTime;
int GreenPin = 8;
int BuzzPin = 9;
int Pin1 = 2;
int Pin2 = 3;
int Pin3 = 4;
int Pin4 = 5;
int Pin5 = 6;
int Pin6 = 7;
void setup() {
  Serial.begin(9600);
  pinMode(LDRPin, INPUT);
  pinMode(PotPin, INPUT);
  pinMode(Pin1, OUTPUT);
  pinMode(Pin2, OUTPUT);
  pinMode(Pin3, OUTPUT);
  pinMode(Pin4, OUTPUT);
  pinMode(Pin5, OUTPUT);
  pinMode(Pin6, OUTPUT);
  pinMode(GreenPin, OUTPUT);
  pinMode(BuzzPin, OUTPUT);
}

void loop() {
  LDRRead = analogRead(LDRPin);
  PotRead = analogRead(PotPin);
  delayTime = (9.716 * PotRead) + 60;
  if(LDRRead >= 315){
    digitalWrite(Pin6, HIGH);
    digitalWrite(Pin5, LOW);
    digitalWrite(Pin4, LOW);
    digitalWrite(Pin3, LOW);
    digitalWrite(Pin2, LOW);
    digitalWrite(Pin1, LOW);
    digitalWrite(GreenPin, LOW);
  }
  else if(LDRRead >= 267.4){
    digitalWrite(Pin6, HIGH);
    digitalWrite(Pin5, HIGH);
    digitalWrite(Pin4, LOW);
    digitalWrite(Pin3, LOW);
    digitalWrite(Pin2, LOW);
    digitalWrite(Pin1, LOW);
    digitalWrite(GreenPin, LOW);
  }
  else if(LDRRead >= 209.8){
    digitalWrite(Pin6, HIGH);
    digitalWrite(Pin5, HIGH);
    digitalWrite(Pin4, HIGH);
    digitalWrite(Pin3, LOW);
    digitalWrite(Pin2, LOW);
    digitalWrite(Pin1, LOW);
    digitalWrite(GreenPin, LOW);
  }
  else if(LDRRead >= 152.2){
    digitalWrite(Pin6, HIGH);
    digitalWrite(Pin5, HIGH);
    digitalWrite(Pin4, HIGH);
    digitalWrite(Pin3, HIGH);
    digitalWrite(Pin2, LOW);
    digitalWrite(Pin1, LOW);
    digitalWrite(GreenPin, LOW);
  }
  else if(LDRRead >= 94.6){
    digitalWrite(Pin6, HIGH);
    digitalWrite(Pin5, HIGH);
    digitalWrite(Pin4, HIGH);
    digitalWrite(Pin3, HIGH);
    digitalWrite(Pin2, HIGH);
    digitalWrite(Pin1, LOW);
    digitalWrite(GreenPin, LOW);
  }
  else if(LDRRead >= 37){
    digitalWrite(Pin6, HIGH);
    digitalWrite(Pin5, HIGH);
    digitalWrite(Pin4, HIGH);
    digitalWrite(Pin3, HIGH);
    digitalWrite(Pin2, HIGH);
    digitalWrite(Pin1, HIGH);
    digitalWrite(GreenPin, HIGH);
    for(int i = 0; i <= 30; i++){
      digitalWrite(BuzzPin, HIGH);
      delayMicroseconds(delayTime);
      digitalWrite(BuzzPin,LOW);
      delayMicroseconds(delayTime);
    }
    delay(400);
    for(int i = 0; i <= 30; i++){
      digitalWrite(BuzzPin, HIGH);
      delayMicroseconds(delayTime);
      digitalWrite(BuzzPin,LOW);
      delayMicroseconds(delayTime);
    }
    delay(400);
    for(int i = 0; i <= 30; i++){
      digitalWrite(BuzzPin, HIGH);
      delayMicroseconds(delayTime);
      digitalWrite(BuzzPin,LOW);
      delayMicroseconds(delayTime);
    }
    delay(400);
  }
  delay(1000);
}
