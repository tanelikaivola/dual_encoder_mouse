/*
Works on Teensy. Mouse.move might not be available on every platform listed here.

Use these digital pins with interrupts:
Board             Interrupt pins           Led pin (Do not use)
Teensy 3.0 - 3.6  All                      13
Teensy LC         2 - 12, 14, 15, 20 - 23  13
Teensy 2.0        5, 6, 7, 8               11
Teensy 1.0        0 - 3, 4, 6, 7, 16 
Teensy++ 2.0      0 - 3, 18, 19, 36, 37    6
Teensy++ 1.0      0 - 3, 18, 19, 36, 37  
Arduino Due       All                      13
Arduino Uno       2, 3                     13
Arduino Leonardo  0 - 3                    13
Arduino Mega      2, 3, 18, 19, 20, 21     13
Sanguino          2, 10, 11                0

*/

#include <Encoder.h>

Encoder Encoder1(5, 6);
Encoder Encoder2(7, 8);

void setup() {}

void loop() {
  long pos1 = 0;
  long pos2 = 0;
  pos1 = Encoder1.read(); Encoder1.write(0);
  pos2 = Encoder2.read(); Encoder2.write(0);
  if (pos1 != 0 || pos2 != 0) {
    Mouse.move(pos1, pos2);
  }
}
