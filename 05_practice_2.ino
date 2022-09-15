void setup() {
  pinMode(7,OUTPUT);
  digitalWrite(7,false);
  delay(1000);
}

void loop() {
  for (int i=0; i<5; i++){
    digitalWrite(7,true);
    delay(100);
    digitalWrite(7,false);
    delay(100);
  }
  digitalWrite(7,true);
  while(true);
}
