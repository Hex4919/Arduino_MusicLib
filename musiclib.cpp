#include "Arduino.h"
#include "hardwareSerial.h"
#include "musiclib.h"

MuLib::MuLib(int pin)
{
  pinMode(pin, OUTPUT);
  pinMode(LED_BUILTIN, OUTPUT);
  digitalWrite(LED_BUILTIN,LOW);
  _pin = pin;
}
void MuLib::play_note(Melnote note)
{
  tone(_pin, note.freq);
  delay(note.len);
  noTone(_pin);
  delay(50);
}

void MuLib::play_melody(Melnote melody[], int mellen)
{
  for(int curnote = 0; curnote < mellen; curnote++){
    digitalWrite(LED_BUILTIN,HIGH);
    play_note(melody[curnote]);
    digitalWrite(LED_BUILTIN,LOW);
    delay(20);
  }
}
