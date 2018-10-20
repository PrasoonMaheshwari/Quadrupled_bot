#include <VarSpeedServo.h>
VarSpeedServo servo1;
VarSpeedServo servo2;
VarSpeedServo servo3;
VarSpeedServo servo4;
VarSpeedServo servo5;
VarSpeedServo servo6;
VarSpeedServo servo7;
VarSpeedServo servo8;

int pos=0;
int led = 3;
char bt = 0;       
void setup() {
  //Serial.begin(9600); 
  //pinMode(led,OUTPUT); 
 // put your setup code here, to run once:
  servo2.attach(5);
  servo1.attach(4);
  //initial position;
  servo1.write(10, 50, false);
  servo2.write(10, 50, false);
}

void loop() {
  // put your main code here, to run repeatedly:
       servo1.write(10, 50, false);
       servo1.wait();
       servo1.write(170, 50, false);
       servo1.wait();
       servo1.write(10, 50, false);
       servo1.wait();
       servo2.write(10, 50, false);
       servo2.wait();
       servo2.write(170, 50, false);
       servo2.wait();
       servo2.write(10, 50, false);
       servo2.wait();
}
