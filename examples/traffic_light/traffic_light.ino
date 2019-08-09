void setup() {
  pinMode(6,OUTPUT);
  pinMode(9,OUTPUT);
  pinMode(12,OUTPUT);
}
void loop(){
  digitalWrite(6,0);
  digitalWrite(9,0);
  digitalWrite(12,1);
  delay(6000);
  digitalWrite(6,0);
  digitalWrite(9,1);
  digitalWrite(12,0);
  delay(1000);
  digitalWrite(6,1);
  digitalWrite(9,0);
  digitalWrite(12,0);
  delay(1000);
  
}
