#include <Arduino.h>
#include <Pinout.h>

#define DEBOUNCE_SECS 1

char color = 0;

void setup() {

  // Let HW some time to initialize
  delay(2 * 1000); 

  // Setup pins
  pinMode(LEDR_PIN, OUTPUT);
  pinMode(LEDW_PIN, OUTPUT);
  pinMode(LEDY_PIN, OUTPUT);

  digitalWrite(LEDR_PIN, LOW);
  digitalWrite(LEDW_PIN, LOW);
  digitalWrite(LEDY_PIN, LOW);

  Serial.begin(115200);     // Initialize serial port

}

void loop() {

  if (digitalRead(BUTTON_PIN)) {
    color = (color + 1) % 3;
    delay(DEBOUNCE_SECS * 1000)
  }

  Serial.printf("Now: %d\n", color);
  digitalWrite(LEDR_PIN, color == 0);
  digitalWrite(LEDW_PIN, color == 1);
  digitalWrite(LEDY_PIN, color == 2);

  delay(1 * 1000);
}

