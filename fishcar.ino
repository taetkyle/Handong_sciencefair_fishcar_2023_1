#include <Servo.h>

Servo servo1;
Servo servo2;

int pos1 = 40;
double i = 0;

void setup() {
  servo1.attach(9);
  servo2.attach(8);
}


void loop() {
  for(i = 5; i <= pos1; i++){
    servo1.write(i);
    servo2.write((i - 5) * 1);
    delay(10);
  }
    for(i = 38; i <= 5; i--){
    servo1.write(i);
    servo2.write((i - 5) * 1);
    delay(10);
  }
  servo1.write(38);
  servo2.write(35);
  delay(100);
  servo1.write(5);
  delay(100);

//servo2.write(35);
//servo1.write(40);
//delay(400);
//servo2.write(0);
//servo1.write(5);
//delay(400);
} 
