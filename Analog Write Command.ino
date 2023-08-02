int pin=4;



void setup()
{
 
  pinMode(pin,OUTPUT);
  
  
  
}

void loop()
{
  analogWrite(pin,255);
  delay(500);
  analogWrite(pin,150);
  delay(500);
  analogWrite(pin,100);
  delay(500);
  analogWrite(pin,50);
  delay(500);
}