const int In1 = 9;
const int In2 = 8;
const int pot = A0;

void setup(){
  pinMode(In1, OUTPUT);
  pinMode(in2, OUTPUT);
  pinMode(pot, INPUT);

  Serial.begin(9600);
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
  int input = analogRead(pot);
  //number,inLow,inHigh,outLow,outHigh
  input = map(input, 0, 1023, 0, 255);

  Serial.println(input);
}
