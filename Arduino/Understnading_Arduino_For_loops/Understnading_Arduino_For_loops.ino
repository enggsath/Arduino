int yellow_led=6;
int red_led=9;
int yellow_blink=3;
int red_blink=5;
int yellow_Time=500;
int red_Time=400;
int i;
void setup() {
  // put your setup code here, to run once:
pinMode(yellow_led,OUTPUT);
pinMode(red_led,OUTPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  for(i=1;i<=yellow_blink;i++){
    digitalWrite(yellow_led,HIGH);
    delay(yellow_Time);
    digitalWrite(yellow_led,LOW);
    delay(yellow_Time);  
  }
  for(i=1;i<=red_blink;i++){
    digitalWrite(red_led,HIGH);
    delay(red_Time);
    digitalWrite(red_led,LOW);
    delay(red_Time);
  }

}
