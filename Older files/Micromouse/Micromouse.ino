#include <AFMotor.h> //You need the AdaFruit library
#include <NewPing.h> //You can write NewPing and download the library


AF_DCMotor motor1(1,MOTOR12_64KHZ);
AF_DCMotor motor2(2,MOTOR12_64KHZ);

const int pingPin = A4; // Trigger Pin of Ultrasonic Sensor
const int echoPin = A5; // Echo Pin of Ultrasonic Sensor

void setup() {
  // put your setup code here, to run once:
motor1.setSpeed(255);
motor2.setSpeed(255);  
Serial.begin(9600); // Starting Serial Terminal

}
void forward()//function to go forward
{
   motor1.run(BACKWARD); // Actually this is "forward"
   motor2.run(BACKWARD);//
}
void backward() //function to go backwards
{
   motor1.run(FORWARD); // Actually this is "forward"
   motor2.run(FORWARD);//
}
void brake()//function to stop
{
   motor1.run(RELEASE); // Actually this is "forward"
   motor2.run(RELEASE);//
}

void left()//function to go left
{
   motor1.run(BACKWARD); // Actually this is "forward"
   motor2.run(RELEASE);//
}

void right()//function to go right
{
   motor1.run(RELEASE); // Actually this is "forward"
   motor2.run(BACKWARD);//
}


void loop() {
  
  // put your main code here, to run repeatedly:
  long duration, cm; // and inches ?
   pinMode(pingPin, OUTPUT);
   digitalWrite(pingPin, LOW);
   delayMicroseconds(2);
   digitalWrite(pingPin, HIGH);
   delayMicroseconds(2);
   digitalWrite(pingPin, LOW);
   pinMode(echoPin, INPUT);
   duration = pulseIn(echoPin, HIGH);//THIS IS WHAT's Measuring our distance?
   cm = microsecondsToCentimeters(duration);
//   Serial.print(cm);
//   Serial.print("cm");
//   Serial.println();
   forward();
if(cm<=10)//if distance less than 10cm, stop
{
  brake();
  left();
  
}
}

long microsecondsToCentimeters(long microseconds) {
   return microseconds / 29 / 2;
}
