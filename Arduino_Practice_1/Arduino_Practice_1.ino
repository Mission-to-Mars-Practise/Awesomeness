int counter = 0;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.print("Counter is: ");
  Serial.println(counter);
  counter = counter + 1;   // or counter++
}
