#include <Arduino.h>
// put function declarations here:
void setup() {
  pinMode(LED_BUILTIN, OUTPUT);  // Inicializa el LED como salida
  Serial.begin(115200);
}

void morseDot() {
  digitalWrite(LED_BUILTIN, LOW);
  delay(500);
  digitalWrite(LED_BUILTIN, HIGH);
  delay(500);
}

void morseDash() {
  digitalWrite(LED_BUILTIN, LOW);
  delay(1000);
  digitalWrite(LED_BUILTIN, HIGH);
  delay(500);
}

void SOS() {
  // Letra 'S' -> "..."
  morseDot();
  morseDot();
  morseDot();
  delay(500);  // Espacio entre letras

  // Letra 'O' -> "---"
  morseDash();
  morseDash();
  morseDash();
  delay(500);  // Espacio entre letras

  // Letra 'S' -> "..."
  morseDot();
  morseDot();
  morseDot();
}

void loop() {
  SOS();  // Llamamos a la función SOS
  delay(3000);  // Espera 3 segundos antes de repetir el mensaje
  Serial.print("XD\n");
}


