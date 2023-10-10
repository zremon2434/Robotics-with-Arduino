int buttonpin1=12;
int buttonpin2=11;
int buttonval1;
int buttonval2;
int LEDbright=0;
int ledpin=8;
int buzzpin=2;
void setup()
{
 pinMode(buttonpin1,INPUT);
 pinMode(buttonpin2,INPUT);
 Serial.begin(9600);
 pinMode(ledpin,OUTPUT);
 pinMode(buzzpin,OUTPUT);
  
}

void loop()
{
buttonval1=digitalRead(buttonpin1);
buttonval2=digitalRead(buttonpin2);  
Serial.print("Button 1 = ");
Serial.print(buttonval1);  
Serial.println(",");
  delay(300);
Serial.print("Button 2 = ");
Serial.print(buttonval2);  
Serial.println(","); 
  if(buttonval1==0){
    LEDbright=LEDbright+15;}
  
  if(buttonval2==0){
    LEDbright=LEDbright-10;}
  
  if(LEDbright>255){
    LEDbright=255;
    digitalWrite(buzzpin,HIGH);
    delay(500);
    digitalWrite(buzzpin,LOW);}

  if(LEDbright<0){
    LEDbright=0;
    digitalWrite(buzzpin,HIGH);
    delay(500);
    digitalWrite(buzzpin,LOW);}
analogWrite(ledpin,LEDbright); 
  }