#ifndef ARDUINO_H
#define ARDUINO_H

// Arduino-compatible definitions for VMKS projects
// This is a basic template for Arduino library files

// Common Arduino constants
#define HIGH 1
#define LOW 0
#define INPUT 0
#define OUTPUT 1
#define INPUT_PULLUP 2

// Basic Arduino function declarations

/**
 * Configure a pin as input or output
 * @param pin - The pin number to configure
 * @param mode - INPUT, OUTPUT, or INPUT_PULLUP
 */
void pinMode(int pin, int mode);

/**
 * Write a HIGH or LOW value to a digital pin
 * @param pin - The pin number to write to
 * @param value - HIGH or LOW
 */
void digitalWrite(int pin, int value);

/**
 * Read the value from a digital pin
 * @param pin - The pin number to read from
 * @return HIGH or LOW
 */
int digitalRead(int pin);

/**
 * Pause the program for a specified time
 * @param ms - Number of milliseconds to delay
 */
void delay(unsigned long ms);

/**
 * Get the number of milliseconds since program start
 * @return Number of milliseconds
 */
unsigned long millis(void);

#endif // ARDUINO_H
