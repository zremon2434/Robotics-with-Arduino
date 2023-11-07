#include<Servo.h>

int servopin1=9;
int servopin2=3;
int trigpin=11;
int echopin=6;
Servo num1;
Servo num2;
int servoPos1=0;
int servoPos2=90;

int durAtion;
float disTance;

void setup()
{
 Serial.begin(9600);
 num1.attach(servopin1);
 num2.attach(servopin2);
 pinMode(trigpin,OUTPUT);
 pinMode(echopin,INPUT); 
}

void loop()
{
 digitalWrite(trigpin,LOW);
 delayMicroseconds(2);
 
 digitalWrite(trigpin,HIGH); 
 delayMicroseconds(10);
 digitalWrite(trigpin,LOW);
 durAtion=pulseIn(echopin,HIGH);
 disTance=(durAtion*0.034)/2.;
 Serial.print("Distance: ");
 Serial.print(disTance);
 Serial.println("cm");
  
 if(disTance>=15 && disTance<=30)
 {
   num1.write(servoPos1);
   num2.write(servoPos2);
 
 }
  
 if(disTance>=1 && disTance<=14.5)
 {
   num1.write(servoPos2);
   num2.write(servoPos1);
 
 }
 else
 {
   num1.write(servoPos1);
   num2.write(servoPos1);

 }

 delay(500);
}