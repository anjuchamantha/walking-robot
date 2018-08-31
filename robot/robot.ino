#include <Servo.h>
Servo servo1,servo2;
//Servo servo2;

void setup() {
  // put your setup code here, to run once:
  servo1.attach(9);
  //servo1.write(100);
}

void loop() {
  servo1.write(110);
  delay(20);
  servo1.write(90);
  delay(1000);
  servo1.write(70);
  delay(20);
  servo1.write(90);
  delay(1000);
  
  
  

}
