#include "Arduino.h"
#include "hardwareSerial.h"
#ifndef Musiclib_j
#define Musiclib_j

typedef struct{
  int freq;
  int len;
} Melnote;


class MuLib
{
  public:
     MuLib(int pin);
     void play_note(Melnote note);
     void play_melody(Melnote melody[], int mellen);
  private:
    int _pin;
};

#endif
