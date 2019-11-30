#define LED_OUTPUT D1 // D1 is the pin we will be powering out LED from

void setup()
{
  pinMode(LED_OUTPUT, OUTPUT); // LED pin as output.
}

void loop()
{
  // turn the LED off.
  digitalWrite(LED_OUTPUT, HIGH);

  delay(1000);
  // turn the LED on
  digitalWrite(LED_OUTPUT, LOW);
  delay(1000);
}
