#ifndef __ARDUINO
#define __ARDUINO
#define LOW 0
#define HIGH 1
#define ARDUINO_INPUT 1
#define ARDUINO_INPUT_PULLUP 3
#define ARDUINO_OUTPUT 2
#include "board.h"
#define PROGMEM
#define false 0
#define true 1
#define memcpy_P memcpy

void pinMode(int pin, int mode);
void digitalWrite(int pin, int value);
int digitalRead(int pin);
void delayMicroseconds(long iDelay);
void sleep_us(int iDelay);
void delay(long iDelay);
long millis(void);
long micros(void);
#define pgm_read_byte(s) *(uint8_t *)s
#define pgm_read_word(s) *(uint16_t *)s
#endif // __ARDUINO
