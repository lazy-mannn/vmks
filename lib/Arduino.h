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
void pinMode(int pin, int mode);
void digitalWrite(int pin, int value);
int digitalRead(int pin);
void delay(unsigned long ms);
unsigned long millis(void);

#endif // ARDUINO_H
