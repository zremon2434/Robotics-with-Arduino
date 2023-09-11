int pin=7;
int delayt=1000;
int j;


void setup()
{
  
  Serial.begin(9600);
  pinMode(pin,OUTPUT);
  
  
}

void loop()
{

  for(j=1;j<6;j=j+1){
    
    Serial.print(j);
    Serial.println();
    digitalWrite(pin,HIGH);
    delay(delayt);
    digitalWrite(pin,LOW); 
    delay(delayt);
  }

  delay(1500);
  
  for(j=6;j<11;j=j+1){

    Serial.print(j);
    Serial.println();
    digitalWrite(pin,HIGH);
    delay(delayt);
  }
  delay(2500);
}