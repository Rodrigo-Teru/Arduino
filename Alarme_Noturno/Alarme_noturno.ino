// C++ code
//
int counter;

void setup()
{
  pinMode(A5, INPUT);
  Serial.begin(9600);
  pinMode(7, INPUT);
  pinMode(5, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(8, OUTPUT);
}

void loop()
{
  if (analogRead(A5) < 450) {
    Serial.println("Esta de dia");
  } else {
    Serial.println("Sistema de alarme ativado");
    if (digitalRead(7) == 1) {
      for (counter = 0; counter < 10; ++counter) {
        Serial.println("Alerta de Intruso");
        tone(5, 26, 3000); // play tone 8 (G#0 = 26 Hz)
        digitalWrite(10, HIGH);
        digitalWrite(8, LOW);
        delay(1000); // Wait for 1000 millisecond(s)
        digitalWrite(10, LOW);
        digitalWrite(8, HIGH);
        delay(1000); // Wait for 1000 millisecond(s)
      }
    }
  }
  delay(1000); // Wait for 1000 millisecond(s)
}