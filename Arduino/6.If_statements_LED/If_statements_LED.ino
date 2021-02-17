int potpin=A1;
int green=7;
int blue=4;
int red=2;
int readval;
float voltage;
int delayT=1500;
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(green,OUTPUT);
pinMode(red,OUTPUT);
pinMode(blue,OUTPUT);
pinMode(potpin,INPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
readval=analogRead(potpin);
voltage=(5./1023.)*readval;
Serial.println(voltage);
if(voltage<3.0){
  digitalWrite(green,HIGH);
  digitalWrite(blue,LOW);
  digitalWrite(red,LOW);
}
if(voltage>3.0 and voltage <4.0){
  digitalWrite(green,LOW);
  digitalWrite(blue,HIGH);
  digitalWrite(red,LOW);
}
if(voltage>4.0){
  digitalWrite(green,LOW);
  digitalWrite(blue,LOW);
  digitalWrite(red,HIGH);
}
delay(delayT);
}
