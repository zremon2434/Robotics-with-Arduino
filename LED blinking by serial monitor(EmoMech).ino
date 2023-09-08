int numblinks;
String msg1="How many blinks do you want?";
int bulb=7;
int j;
int blinktime=900;

void setup()
{
  
 Serial.begin(9600);
 pinMode(bulb,OUTPUT); 
}

void loop(){

 Serial.println(msg1);
 while(Serial.available()==0){
  
  }
  
 numblinks=Serial.parseInt();
  for(j=1;j<=numblinks;j=j+1){
  
  digitalWrite(bulb,HIGH);
  delay(blinktime);
  digitalWrite(bulb,LOW);
  delay(blinktime);
  }
  
  
}