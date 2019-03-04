void setup() {
  Serial.begin(9600);
}

void loop() { 
  if(analogRead(0) == LOW){
    Serial.write("H");
    digitalWrite(13, HIGH);
  } else {
    Serial.write(0);
    digitalWrite(13, LOW);
  }
}
