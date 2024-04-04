/* Author: ZR Emon*/

int ledpin=8;
int buttonpin=12;
int buttonread;
int delT=200;

void setup()
{
  
 Serial.begin(9600);
 pinMode(ledpin,OUTPUT);
 pinMode(buttonpin,INPUT);
  
}

void loop()
{

 buttonread=digitalRead(buttonpin);
 Serial.println(buttonread);
  
  if(buttonread==1){
    digitalWrite(ledpin,LOW);
  }
  if(buttonread==0){
    digitalWrite(ledpin,HIGH);
  } 
  
}
