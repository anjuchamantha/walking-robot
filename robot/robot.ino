#include <Servo.h>
Servo servo1;
Servo servo2;

void setup() {
  // put your setup code here, to run once:
  servo1.attach(9);
  servo2.attach(9);
}

void loop() {
  servo1.write(100);
  delay(500);
  servo1.write(90);
  servo2.write(100);
  delay(500);
  servo2.write(90);
  delay(1000);
  servo1.write(80);
  delay(500);
  
  

}
