#include <Servo.h>

int redpin1=13;
int redpin2=12;
int greenpin1=11;
int greenpin2=10;
int servo1=3;
int servo2=6;
int servoposone=0;
int servopostwo=90;
int dt=6000;
Servo myservo1;
Servo myservo2;

void setup()
{
 pinMode(redpin1,OUTPUT);
 pinMode(redpin2,OUTPUT);
 pinMode(greenpin1,OUTPUT);
 pinMode(greenpin2,OUTPUT);
  
 myservo1.attach(servo1);
 myservo2.attach(servo2); 
  
}

void loop()
{

 digitalWrite(redpin1,HIGH);
 digitalWrite(greenpin2,HIGH);
 myservo1.write(servopostwo);
 digitalWrite(redpin2,LOW);
 digitalWrite(greenpin1,LOW);
 myservo2.write(servoposone);
  
 delay(dt);
  
 digitalWrite(redpin2,HIGH);
 digitalWrite(greenpin1,HIGH);
 myservo2.write(servopostwo);
 digitalWrite(redpin1,LOW);
 digitalWrite(greenpin2,LOW);
 myservo1.write(servoposone);
  
 delay(dt);
  
}
