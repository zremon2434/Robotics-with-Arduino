/* Author: ZR Emon */

int pinred=8;
int pingreen=10;
int pinblue=9;
String msg="What color do you want to blink?";
String mycolor;
void setup()
{
Serial.begin(9600);
pinMode(pinred,OUTPUT);
pinMode(pingreen,OUTPUT);
pinMode(pinblue,OUTPUT);   
}
void loop()
{
Serial.println(msg);
  while(Serial.available()==0){
  }
mycolor=Serial.readString();
  if(mycolor=="red" || mycolor=="RED" || mycolor=="Red"){
    digitalWrite(pinred,HIGH);
    digitalWrite(pingreen,LOW);
    digitalWrite(pinblue,LOW);}
 
  if(mycolor=="green" || mycolor=="GREEN" || mycolor=="Green"){
    digitalWrite(pinred,LOW);
    digitalWrite(pingreen,HIGH);
    digitalWrite(pinblue,LOW);}
  
  if(mycolor=="blue" || mycolor=="BLUE" || mycolor=="Blue"){
    digitalWrite(pinred,LOW);
    digitalWrite(pingreen,LOW);
    digitalWrite(pinblue,HIGH);}
  
  if(mycolor=="pink" || mycolor=="PINK" || mycolor=="Pink"){
    digitalWrite(pinred,HIGH);
    digitalWrite(pingreen,LOW);
    digitalWrite(pinblue,HIGH);}
   }
