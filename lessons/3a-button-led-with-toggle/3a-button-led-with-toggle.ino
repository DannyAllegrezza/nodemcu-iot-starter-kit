#define INPUT_BUTTON_PIN D2 // (GPI04)

int currentState = 0;
int previousState = 0;

void setup()
{
  Serial.begin(115200);
  pinMode(OUTPUT_LED_PIN, OUTPUT);
  pinMode(INPUT_BUTTON_PIN, INPUT);
}

void loop()
{
  currentState = digitalRead(INPUT_BUTTON_PIN);

  if (currentState != previousState)
  {
    previousState = currentState;

    if (currentState == HIGH)
    {
      // toggle
    }
  }

  {
    digitalWrite(OUTPUT_LED_PIN, HIGH);
  }
  else
  {
    digitalWrite(OUTPUT_LED_PIN, LOW);
  }
}
