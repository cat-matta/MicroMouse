#include <AFMotor.h>

//https://learn.adafruit.com/adafruit-motor-shield/using-dc-motors
//https://learn.adafruit.com/adafruit-motor-shield/af-dcmotor-class
AF_DCMotor motor1(1,MOTOR12_64KHZ);
AF_DCMotor motor2(2,MOTOR12_64KHZ);
void setup() {
  // put your setup code here, to run once:
motor1.setSpeed(120);
motor2.setSpeed(120);  
}

void loop() {
  
  // put your main code here, to run repeatedly:
  //GO FORWARD
  delay(5000);
    motor1.run(BACKWARD); // flip directions
   motor2.run(BACKWARD);//MOTOR 2 runs opposite of motor 1
  delay(5000);
//STOP the motor
  motor1.run(RELEASE);
  motor2.run(RELEASE);
  delay(5000);
//GO BACKWARD
   motor1.run(FORWARD);//this makes it go in the same direction of the other one
   motor2.run(FORWARD);
  delay(5000);
//GO FORWARD AGAIN
   motor1.run(BACKWARD);//
   motor2.run(BACKWARD);
   delay(1500);
   motor1.run(RELEASE);
  motor2.run(RELEASE);
  delay(1500);
//GO RIGHT
  motor1.setSpeed(-120);//opposite direction makes the motor turn?
  motor2.setSpeed(120); 
  motor1.run(FORWARD);//
  motor2.run(FORWARD);
 delay(1500);
// Go BACKWARD
  motor1.setSpeed(120);
  motor2.setSpeed(120);
  motor1.run(BACKWARD); // flip directions
  motor2.run(BACKWARD);//MOTOR 2 runs opposite of motor 
 delay(5000);
  //Test
 //GO LEFT AND RIGHT -- IN PROGRESS
 /*  motor1.setSpeed(100);
  motor2.setSpeed(100);
   motor1.run(BACKWARD);//
   motor2.run(BACKWARD);
   delay(500);
  motor1.run(RELEASE);
  motor2.run(RELEASE);
   delay(500);
  motor1.run(BACKWARD);//
  motor2.run(FORWARD);
  delay(500);
  //Change of direction
    motor1.run(FORWARD);//
  motor2.run(BACKWARD);
  delay(500);
  */
 
}
