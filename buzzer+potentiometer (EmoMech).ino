int buzzpin=9;
String msg="What is your exact reading in Potentiometer? ";
int potval;
int potpin=A3;
float vout;
float readnum;

void setup()
{
  Serial.begin(9600);
  pinMode(buzzpin,OUTPUT);
  pinMode(potpin,INPUT);  
}

void loop()
{
potval=analogRead(potpin);
vout=(5./1023.)*potval;
Serial.println(vout);

Serial.println(msg);
  while(Serial.available()==0){}
readnum=Serial.parseInt();
  if(readnum==5){
  analogWrite(buzzpin,255);
  delay(2000);
  }
  if(readnum<5){
  analogWrite(buzzpin,0);
  }
  
}