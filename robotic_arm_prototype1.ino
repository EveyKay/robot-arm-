#include <Servo.h>

Servo Servo1;

int servoPin1 = 9;
int potPin1 = A0;

Servo Servo2;

int servopin2 = 10;
int potPin2 = A1; 

Servo Servo3; 

int servopin3 = 11;
int potPin3 = A2;


void setup() {
    Servo1.attach(servoPin1);
  	Servo2.attach(servopin2);
  	Servo3.attach(servopin3);
}


void loop() {
    int reading = analogRead(potPin1);
    int angle = map(reading, 0, 1023, 0, 180);
    Servo1.write(angle);
  
 	int reading2 = analogRead(potPin2);
    int angle2 = map(reading2, 0, 1023, 0, 180);
    Servo2.write(angle2);
  
 	int reading3 = analogRead(potPin3);
    int angle3 = map(reading3, 0, 1023, 0, 180);
    Servo3.write(angle3);
}