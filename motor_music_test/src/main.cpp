#include <Arduino.h>

//int LED_BUILTIN = 2;
int MOTOR = 9;


void setup() {
  pinMode (LED_BUILTIN, OUTPUT);
  pinMode (MOTOR, OUTPUT);
  Serial.begin(256000);
}

int delayVal = 0;
int delayValMin = 100;
int delayValMax = 1000;
unsigned int freq1[] = {LOW, LOW, LOW, LOW, LOW, HIGH, HIGH, HIGH, HIGH, HIGH};
unsigned int freq2[] = {LOW, LOW, LOW, LOW, LOW, LOW, LOW, LOW, LOW, LOW, LOW, HIGH, HIGH, HIGH, HIGH, HIGH, HIGH, HIGH, HIGH, HIGH, HIGH, HIGH};
unsigned int index = 0;
void loop() {
  if (freq1[index%10] || freq2[index%22]) {
    digitalWrite(LED_BUILTIN, HIGH);
    digitalWrite(MOTOR, HIGH);
  } else {
    digitalWrite(LED_BUILTIN, LOW);
    digitalWrite(MOTOR, LOW);
  }
  delayMicroseconds(1);
  index++;
 //Serial.println(index);
}