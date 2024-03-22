/* Author: ZR Emon */

int pin1=6;
int delayt=2000;
int delaytt=1000;
int pin2=9;
int pin1blink=3;
int pin2blink=5;
int j;

void setup()
{
  pinMode(pin1,OUTPUT);
  
  pinMode(pin2,OUTPUT);
        
}

void loop()
{

  for(j=1;j<=pin1blink;j=j+1){digitalWrite(pin1,HIGH);
  delay(delaytt);
  digitalWrite(pin1,LOW);
  delay(delaytt);}

  delay(delayt);
    
  for(j=1;j<=pin2blink;j=j+1){digitalWrite(pin2,HIGH);
  delay(delaytt);
  digitalWrite(pin2,LOW);
   delay(delaytt);}
  
   delay(delayt);  
}
