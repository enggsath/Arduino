#include <LiquidCrystal.h>
LiquidCrystal lcd(13,12,6,7,8,9); //rs,en,4,5,6,7
void setup()
{
  pinMode(13, OUTPUT);
  pinMode(12,OUTPUT);
  pinMode(6,OUTPUT);
  pinMode(7,OUTPUT);
  pinMode(8,OUTPUT);
  pinMode(9,OUTPUT);
  pinMode(3,OUTPUT);
  analogWrite(3,75);
  lcd.begin(16,2);
  Serial.begin(9600);
}

void loop()
{
  String a=Serial.readString();
  lcd.setCursor(2,0);
  lcd.print("m@#!$@%#");
  lcd.setCursor(0,1);
  lcd.print(a);
  lcd.scrollDisplayRight();

}
