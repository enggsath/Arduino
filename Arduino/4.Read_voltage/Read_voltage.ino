int ReadPin=A1;
float readVal;
float V2;
int delayTime=1000;
void setup() {
  // put your setup code here, to run once:
  pinMode(ReadPin,INPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  readVal=analogRead(ReadPin);
  V2=(5./1023.)*readVal;
  Serial.print(V2);Serial.println("  volts");
  delay(delayTime);
}
