int potval;
int potpin=A0;
int redpin=7;
int delayt=1000;

void setup(){
  
  Serial.begin(9600);
  pinMode(redpin,OUTPUT);
  pinMode(potpin,INPUT);  
}

void loop(){
  
  potval=analogRead(potpin);
  Serial.println(potval);
  delay(delayt);
  
  while(potval>1000){
  
  digitalWrite(redpin,HIGH);
  potval=analogRead(potpin);
  Serial.println(potval);
  delay(delayt);  
  }
  
  digitalWrite(redpin,LOW);
}