#include "musiclib.h"

#define BPM 90

#define P_SUM 5

#define NOTE_C 262
#define NOTE_D 294
#define NOTE_E 330
#define NOTE_F 349
#define NOTE_G 392
#define NOTE_A 440
#define NOTE_B 466
#define NOTE_H 493


void setup() {
  Serial.begin(9600);
  Serial.println("Hallo Welt!");
}

/**
int full =  60 * 4 * 200 / BPM;
int half = full / 2;
int quart = full / 4;
int achtel = full / 8;
int sechs = full / 16;
*/
int quart = 400 * 60 / BPM;
int full = quart * 4;
int half = quart * 2;
int achtel = quart / 2;
int sechs = quart / 4; 

Melnote melody[] = {
  {freq: NOTE_C , len: achtel},
  {freq: NOTE_D , len: achtel},
  {freq: NOTE_E , len: achtel},
  {freq: NOTE_F, len: achtel},
  {freq: NOTE_G , len: quart},
  {freq: NOTE_G , len: quart},
  {freq: NOTE_A, len: achtel},
  {freq: NOTE_A, len: achtel},
  {freq: NOTE_A, len: achtel},
  {freq: NOTE_A, len: achtel},
  {freq: NOTE_G, len: half},
  {freq: NOTE_A, len: achtel},
  {freq: NOTE_A, len: achtel},
  {freq: NOTE_A, len: achtel},
  {freq: NOTE_A, len: achtel},
  {freq: NOTE_G, len: half},
  {freq: NOTE_F, len: achtel},
  {freq: NOTE_F, len: achtel},
  {freq: NOTE_F, len: achtel},
  {freq: NOTE_F, len: achtel},
  {freq: NOTE_E, len: quart},
  {freq: NOTE_E, len: quart},
  {freq: NOTE_D, len: achtel},
  {freq: NOTE_D, len: achtel},
  {freq: NOTE_D, len: achtel},
  {freq: NOTE_D, len: achtel},
  {freq: NOTE_C, len: half}};

MuLib mul = MuLib(5);
void loop() {
  mul.play_melody(melody, 27);
  delay(1000);
}
