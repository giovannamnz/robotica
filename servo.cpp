#include<Servo.h>
Servo meuServo;

void setup(){
    meuServo.attach(9);
}
void loop(){
    for(int cont =0; cont <= 180; cont++){
        meuServo.write(cont);
        delay(50);
    }
    for (int cont =180; cont >= 0; cont--){
        meuServo.write(cont);
        delay(50);
    } 
}