int red_led=11;
int green_led=6;
int blue_led=5;
int Speed=150;
void setup() {
  // put your setup code here, to run once:
  pinMode(red_led,OUTPUT);
  pinMode(green_led,OUTPUT);
  pinMode(blue_led,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(red_led,HIGH);
  delay(Speed/5);
  digitalWrite(red_led,LOW);
  delay(Speed/5);
  digitalWrite(green_led,HIGH);
  delay(Speed*10);
  digitalWrite(green_led,LOW);
  delay(Speed*10);
  digitalWrite(blue_led,HIGH);
  delay(Speed*15);
  digitalWrite(blue_led,LOW);
  delay(Speed*15);
}
