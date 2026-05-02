#include <Servo.h>

Servo servo1;
Servo servo2;
Servo servo3;
Servo servo4;

void setup() {
  // put your setup code here, to run once:
  servo1.attach(3);
  servo2.attach(5);
  servo3.attach(6);
  servo4.attach(10);
}

void loop() {
  // put your main code here, to run repeatedly:
  servo1.write(180); // Fast forward
  servo2.write(0);   // Fast reverse
  servo3.write(90);  // Stopped
  servo4.write(100); // Slow forward
  
  delay(2000);       // Run for 2 seconds
}
