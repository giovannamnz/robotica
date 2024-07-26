int timer = 50;
void setup (){
//fOR PARA CONFIGURAR CADA PINO COMO SAIDA 
  for(int thisPin = 2; thisPin < 13; thisPin++)
  {
  pinMode(thisPin, OUTPUT);
  }
}
void loop(){
//loop do pino 3 ao 7
  for(int thisPin = 2; thisPin < 13; thisPin++){
  //liga este pino>
    digitalWrite(thisPin, HIGH);
    //desliga este pino:
    digitalWrite(thisPin, LOW);
  }
// loop do pino 7 ao 3:
  for(int thisPin = 12; thisPin >= 2; thisPin --){
  digitalWrite(thisPin, HIGH);
    delay(timer);
    // desliga este pino:
  digitalWrite(thisPin, LOW);  
  }
}