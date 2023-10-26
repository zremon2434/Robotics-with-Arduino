int lightpin=A0;
int lightval;
int del=250;
int red=8;
int green=9;
int blue=10;

void setup()
{
 Serial.begin(9600);
 pinMode(lightpin,INPUT);
 pinMode(red,OUTPUT);
 pinMode(green,OUTPUT);
 pinMode(blue,OUTPUT); 
}

void loop()
{
  
 lightval=analogRead(lightpin);
 Serial.println(lightval);
  if(lightval>600){
    digitalWrite(red,HIGH);
    digitalWrite(green,LOW);
    digitalWrite(blue,LOW);
  }
  
  if(lightval<320){
    digitalWrite(red,LOW);
    digitalWrite(green,LOW);
    digitalWrite(blue,HIGH);
  }    
}