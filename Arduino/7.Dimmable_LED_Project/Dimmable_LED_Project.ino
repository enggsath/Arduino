int potpin=A1;
int ledpin=5;
int potval;
int ledval;
int delayT=500;
void setup(){
  pinMode(potpin,INPUT);
  pinMode(ledpin,OUTPUT);
  Serial.begin(9600);
}
void loop(){
  potval=analogRead(potpin);
  ledval=(255./1023.)*potval;
  Serial.print("LedVal:");
  Serial.println(ledval);
  analogWrite(ledpin,ledval);
  delay(delayT);
}
