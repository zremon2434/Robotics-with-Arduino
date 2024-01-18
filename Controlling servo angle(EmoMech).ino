#include<Servo.h>
int serpin=6;
Servo myser;
float servoAngle;
int trigpin=9;
int echopin=10;

long duration;
int distance;


void setup() {
 Serial.begin(9600);
 pinMode(trigpin,OUTPUT);
 pinMode(echopin,INPUT);
 myser.attach(serpin);

}

void loop() {
 digitalWrite(trigpin,LOW);
 delayMicroseconds(2);

 digitalWrite(trigpin,HIGH);
 delayMicroseconds(10);
 digitalWrite(trigpin,LOW);

 duration=pulseIn(echopin,HIGH);
 distance=duration*0.034/2;

 Serial.print("Distance: ");
 Serial.println(distance);

 servoAngle=170/10*(distance-12)+170;
 myser.write(servoAngle);

 Serial.print("Servoangle: ");
 Serial.println(servoAngle);
 
 delay(200);



}
