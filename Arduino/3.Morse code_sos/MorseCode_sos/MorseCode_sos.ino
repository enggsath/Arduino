int red_led=11;
int dit=250;
int dash=700;
int longD=2000;
void setup() {
  // put your setup code here, to run once:
pinMode(red_led,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  for(int i=1;i<=3;i++)
  {
    digitalWrite(red_led,HIGH);
    delay(dit);
    digitalWrite(red_led,LOW);
    delay(dit);
  }
  for(int i=1;i<=3;i++){
    digitalWrite(red_led,HIGH);
    delay(dash);
    digitalWrite(red_led,LOW);
    delay(dash);
  }
  for(int i=1;i<=3;i++)
  {
    digitalWrite(red_led,HIGH);
    delay(dit);
    digitalWrite(red_led,LOW);
    delay(dit);
  }
  delay(longD);
}
