#ifndef UTILS_h
#define UTILS_h

#include <stdio.h>
#include <unistd.h>

#include <color.h>

void delay(int _ms);
void delayMicroseconds(int _ms);

void nc(const char* _fonctionName);

// Fonctions non-reconnues :

void pinMode(int a, int b);
void digitalWrite(int a, int b);

/*int digitalRead(a);
int analogRead(a);
void analogReference(a);
void analogWrite(broche, a);
void tone();
void noTone();
void shiftOut(a, b, c, d);
unsigned long pulseIn(a, b);
unsigned long millis();
unsigned long micros();
void attachInterrupt(a, b, c);
void detachInterrupt(a);
void interrupts();
void noInterrupts();
void lowByte();
void highByte();
void bitRead();
void bitWrite();
void bitSet();
void bitClear();
void bit();
*/
#endif
