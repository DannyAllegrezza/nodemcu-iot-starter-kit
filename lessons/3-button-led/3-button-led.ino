#define OUTPUT_LED_PIN D1 // (GPIO5)
#define INPUT_BUTTON_PIN D2 // (GPI04)

int buttonState = 0;

void setup()
{
  Serial.begin(115200);
  pinMode(OUTPUT_LED_PIN, OUTPUT);
  pinMode(INPUT_BUTTON_PIN, INPUT);
}

void loop()
{
  buttonState = digitalRead(INPUT_BUTTON_PIN);
  Serial.println(buttonState);
  
  if (buttonState == 1)
  {
    Serial.println("The button is pressed.....");
    digitalWrite(OUTPUT_LED_PIN, HIGH);
    delay(200);
  }
  else 
  {
    Serial.println("The button is NOT pressed");
    digitalWrite(OUTPUT_LED_PIN, LOW);
    delay(200);
  } 
}
