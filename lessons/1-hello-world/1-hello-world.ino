void setup() {
  // put your setup code here, to run once:
  // Configure the serial baudrate to be the same as whats configured in the Ardunio IDE..
  Serial.begin(115200);
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println("Hello world!");
  delay(5000); // delay for 5s
}
