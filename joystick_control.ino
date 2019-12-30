// Arduino pin numbers
const int SW_pin = 7; // digital pin connected to switch output
const int X_pin = 0; // analog pin connected to X output
const int Y_pin = 1; // analog pin connected to Y output
const int A_pin = 2; // digital pin connected to tactile button

void setup() {
  pinMode(SW_pin, INPUT);
  digitalWrite(SW_pin, HIGH);
  Serial.begin(115200);
}

void loop() {
  Serial.print("Switch:  ");
  Serial.print(digitalRead(SW_pin));
  Serial.print("\n");
  Serial.print("X-axis: ");
  Serial.print(analogRead(X_pin));
  Serial.print("\n");
  Serial.print("Y-axis: ");
  Serial.print(analogRead(Y_pin));
  Serial.print("\n");
  Serial.print("Button:  ");
  Serial.print(digitalRead(A_pin));
  Serial.print("\n\n");
  delay(500);
}
