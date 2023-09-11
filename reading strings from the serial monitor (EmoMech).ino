int pin1=7;
int pin2=8;
int pin3=12;
String led;
String msg1 ="Emon tell us what color of LED would you like to light up? ";
String msg2 ="ok then, ";
String msg3 ="we now light up the ";

void setup()
{Serial.begin(9600);
  pinMode(pin1,OUTPUT);
  pinMode(pin2,OUTPUT);
  pinMode(pin3,OUTPUT);}

void loop()
{
  Serial.print(msg1);
  while(Serial.available()==0){}
  
  led =Serial.readString();
  Serial.println();
  Serial.print(msg2);
  Serial.print(msg3);
  Serial.println(led);
  
  if(led=="red" || led=="RED" || led=="Red"){
    digitalWrite(pin1,HIGH);}
  if(led=="green" || led=="GREEN" || led=="Green"){
    digitalWrite(pin2,HIGH);}
  if(led=="blue" || led=="BLUE" || led=="Blue"){
    digitalWrite(pin3,HIGH);}    
}