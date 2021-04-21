const int rPin = 9;
const int gPin = 10;
const int bPin = 11;


void setup() {
  // put your setup code here, to run once:

  pinMode(rPin,OUTPUT);
  pinMode(gPin,OUTPUT);
  pinMode(bPin,OUTPUT);

  
  digitalWrite(rPin, 0);
  digitalWrite(gPin, 0);
  digitalWrite(bPin, 0);
}

void loop() {

for (int i=0;i<255;i++){
  analogWrite(rPin,i);
  delay(10);
}

for (int i=255;i>0;i--){
    analogWrite(rPin,i);
  delay(10);
}

for (int i=0;i<255;i++){
  analogWrite(gPin,i);
  delay(10);
}

for (int i=255;i>0;i--){
    analogWrite(gPin,i);
  delay(10);
}

for (int i=0;i<255;i++){
  analogWrite(bPin,i);
  delay(10);
}

for (int i=255;i>0;i--){
    analogWrite(bPin,i);
  delay(10);
}

}
