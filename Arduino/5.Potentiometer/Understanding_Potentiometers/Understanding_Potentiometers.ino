int myvoltpin=A3;
int readval;
float Voltage;
int delayT=500;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
readval=analogRead(myvoltpin);
Voltage=(5./1023.)*readval;
Serial.print("voltage:");
Serial.println(Voltage);
delay(delayT);
}
