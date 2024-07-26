const int ledPin = 12;
const int potenciometro = 5;
int valorpot = 0;
void setup () {
pinMode(ledPin, OUTPUT);
}
void loop (){
int valorpot = analogRead(potenciometro); 
digitalWrite(ledPin, valorpot);
delay(valorpot);
}