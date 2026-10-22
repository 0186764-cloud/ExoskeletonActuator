const int In1 = 9;
const int In2 = 8;\

void setup(){
  pinMode(In1, OUTPUT);
  pinMode(in2, OUTPUT);
}
void Rotate(){
  digitalWrite(In1, HIGH);
  digitalWrite(In2, LOW);

  delay(2000);
  digitalWrite(In1, LOW);
  digitalWrite(In2, LOW);
}
void loop(){
  Rotate();
  delay(1000);
}
