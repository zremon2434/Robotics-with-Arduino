int pir=7;
int buzzer=8;
int state;




void setup()
{
   
 pinMode(pir,INPUT);
 pinMode(buzzer,OUTPUT);
  
    
}

void loop()
{
  
  state=digitalRead(pir);
  digitalWrite(buzzer,state);
  
  
  
}
