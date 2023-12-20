#include <Arduino.h>

#include "driver/ledc.h"


const int stepperPins[] = {12, 13, 15, 14};
const int stepperPinCount = 4;

const int ledPin = 4;
const int stepsPerRevolution = 20;

void setup()
{
// Declare pins as Outputs
  pinMode(ledPin, OUTPUT);

  ledc_timer_config_t ledc_timer = {
      .duty_resolution = LEDC_TIMER_13_BIT, // resolution of PWM duty
      .freq_hz = 5000,                      // frequency of PWM signal
      .speed_mode = LEDC_HIGH_SPEED_MODE,           // timer mode
      .timer_num = LEDC_TIMER_0,            // timer index
      .clk_cfg = LEDC_REF_TICK,              // Use reference tick clock for now (1MHz)
  };

  ledc_timer_config(
}

void loop()
{
	/*
	// Set motor direction clockwise
	digitalWrite(dirPin, HIGH);
    digitalWrite(ledPin, HIGH);

	// Spin motor slowly
	for(int x = 0; x < stepsPerRevolution*200; x++)
	{
		digitalWrite(stepPin, HIGH);
		// Might be able to push steps faster than 500 us delay, but need higher voltage and lower current.
		// Or more microsteps actually...
		delayMicroseconds(500);
		digitalWrite(stepPin, LOW);
		delayMicroseconds(500);
	}
	delay(300); // Wait a second
	
	// Set motor direction counterclockwise
	digitalWrite(dirPin, LOW);
    digitalWrite(ledPin, LOW);

	// Spin motor quickly
	for(int x = 0; x < stepsPerRevolution*200; x++)
	{
		digitalWrite(stepPin, HIGH);
		delayMicroseconds(500);
		digitalWrite(stepPin, LOW);
		delayMicroseconds(500);
	}
	delay(300); // Wait a second
	*/
}
