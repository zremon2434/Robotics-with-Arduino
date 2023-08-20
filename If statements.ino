
int myVolt =A2;
int readVal;
float v2;
int red =9;







void setup()
{
 
  
  Serial.begin(9600);
  pinMode(red,OUTPUT);
  pinMode(myVolt,INPUT);
  
   
}

void loop()
{
 
readVal=analogRead(myVolt);
v2=(5./1023.)*readVal;
Serial.print("Potentiometer voltage is ");
Serial.println(v2); 

if(v2>4.0){
  
  digitalWrite(red,HIGH);
  
  
  
}
  
if(v2<4.0){
  
  digitalWrite(red,LOW);
  
  
  
}


delay(1300);
  
  
  
   
}