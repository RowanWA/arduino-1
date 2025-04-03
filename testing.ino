#include "pitches.h"
#include "melodies.h"
#include "LedManager.h"
#include "PiezoManager.h"

// constexpr int noteOne = NOTE_G3;
// constexpr int noteTwo = NOTE_D3;


const int LedPin_1 = 6;
const int LedPin_2 = 7;
int lastLedUpdate = 0;
// constexpr int ledPinInterval = 1000;


const int piezoPin = 13;
int lastPiezoUpdate = 0;


int notePlaying = 1;

// int noteCount = 0;



void setup() {
  pinMode(LedPin_1, OUTPUT);
  pinMode(LedPin_2, OUTPUT);

  // led.updateState(currentMillis, first);
  // led2.updateState(currentMillis, first);

  // tone(piezoPin, NOTE_G3, 1000);
  // digitalWrite(LedPin_1, HIGH);
  // digitalWrite(LedPin_2, LOW);
}

void loop() {
  const int currentMillis = millis();
  // if ((currentMillis - lastLedUpdate) >= ledPinInterval) {
  //   const int ledState_1 = digitalRead(LedPin_1);
  //   digitalWrite(LedPin_1, !ledState_1);
  //   const int ledState_2 = digitalRead(LedPin_2);
  //   digitalWrite(LedPin_2, !ledState_2);
  //   lastLedUpdate = currentMillis;
  // }
  led.updateState(currentMillis);
  led2.updateState(currentMillis);
  
  piezoA.updateState(currentMillis);

  // if ((currentMillis - lastPiezoUpdate) >= Melody[noteCount].duration + 100) {
    
  //   int noteToPlay = Melody[noteCount].pitch;
  //   tone(piezoPin, noteToPlay, Melody[noteCount].duration);
    
  //   int NoteLen = sizeof(Melody)/sizeof(Melody[0]);
  //   if (noteCount < NoteLen) {
  //   noteCount = noteCount + 1;}
  //   else 
  //   noteCount = 0;
  //   lastPiezoUpdate = currentMillis;
  // }
}
};

