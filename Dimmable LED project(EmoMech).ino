int potval=A1;
int resiread=6;
int readpot;
float LEDval;
String emo="Emon your LEDval is ";

void setup()
{
  pinMode(potval,INPUT);    
  pinMode(resiread,OUTPUT);
  
  Serial.begin(9600);
  
}

void loop()
{
  
readpot=analogRead(potval);
LEDval=(255./1023.)*readpot;

analogWrite(resiread,LEDval);
Serial.print(emo); 
Serial.println(LEDval);
  
}