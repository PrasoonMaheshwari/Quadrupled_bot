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
  Serial.begin(9600); 
  pinMode(led,OUTPUT); 
 // put your setup code here, to run once:
  servo8.attach(11);
  servo7.attach(10);
  servo6.attach(9);
  servo5.attach(8);
  servo4.attach(7);
  servo3.attach(6);
  servo2.attach(5);
  servo1.attach(4);
  //initial position;
  servo1.write(50, 50, false);
  servo2.write(80, 50, false);
  servo3.write(65, 50, false);
  servo4.write(90, 50, false);
  servo5.write(100, 50, false);
  servo6.write(120, 50, false);
  servo7.write(85, 50, false);
  servo8.write(110, 50, false);
}

void loop() {
  servo1.write(50, 50, false);
       servo2.write(80, 50, false);
       servo5.write(10, 50, false);
       servo6.write(30, 50, false);
       servo8.write(20, 50, false);
       servo3.write(120, 50, false);
       servo4.write(35, 50, false);
       servo7.write(135, 50, false);
       servo3.wait();
       servo4.wait();
       servo7.wait();
       servo7.write(175, 50, false);
       servo4.write(125, 50, false);
       servo8.write(65, 50, false);
       servo8.wait();
       servo4.wait();
       servo7.wait();
       servo8.write(20, 50, false);
       servo1.write(105, 50, false);
       servo2.write(115, 50, false);
       servo3.write(65, 50, false);
       servo4.write(90, 50, false);       
       servo1.wait();
       servo2.wait();
       servo3.wait();
       servo4.wait();
       servo8.wait();       
       servo2.write(25, 50, false);
       servo6.write(75, 50, false);
       servo2.wait();
       servo6.wait();
       servo1.write(15, 50, false);
       servo5.write(55, 50, false);
       servo6.write(30, 50, false);
       servo1.wait();
       servo5.wait();
       servo6.wait();
       servo5.write(10, 50, false);
       servo1.write(50, 50, false);
       servo2.write(80, 50, false);
       servo3.write(100, 50, false);
       servo4.write(35, 50, false);
       servo1.wait();
       servo2.wait();
       servo3.wait();
       servo4.wait();
       servo5.wait();
}
