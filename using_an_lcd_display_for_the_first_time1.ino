#include<LiquidCrystal.h>
int rs=7;
int en=8;
int d4=9;
int d5=10;
int d6=11;
int d7=12;

LiquidCrystal lcd(rs,en,d4,d5,d6,d7);


void setup()
{
 
 lcd.begin(16,2);
 Serial.begin(9600);
  
}

void loop()
{

 lcd.setCursor(0,0);
 lcd.print("itna andhera");
 lcd.setCursor(0,1);
 lcd.print("kiyu heinn?");
 delay(3000);
 lcd.clear();
 lcd.setCursor(0,0);
 lcd.print("Oh! yeeh toh");
 lcd.setCursor(0,1);
 lcd.print("meri life hein:)");
 delay(3000);
 lcd.clear();
 delay(3000);
  
}