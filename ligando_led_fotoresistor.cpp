const int lightPin = A0;
const int ledPin = 13;

void setup(){
Serial.begin(9600);
pinMode(ledPin, OUTPUT);
}

void loop(){
int luminosidade = analogRead(lightPin);
  Serial.println(luminosidade);
  
  analogWrite(ledPin, luminosidade /4);
  
  const int limiarLuz = 200;
  if(luminosidade > limiarLuz){
    digitalWrite(ledPin, LOW);}
  else {digitalWrite(ledPin, HIGH);
  
  }
  delay(10);
}