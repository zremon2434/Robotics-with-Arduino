
int myVolt =A2;
int readVal;
float v2;








void setup()
{
 
  
  Serial.begin(9600);
  
  
  
   
}

void loop()
{
 
readVal=analogRead(myVolt);
v2=(5./1023.)*readVal;
Serial.println(v2);
delay(750);
  
  
  
   
}