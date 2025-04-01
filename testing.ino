#include "pitches.h"

// constexpr int noteOne = NOTE_G3;
// constexpr int noteTwo = NOTE_D3;


constexpr int LedPin_1 = 6;
constexpr int LedPin_2 = 7;
int lastLedUpdate = 0;
constexpr int ledPinInterval = 1000;


constexpr int piezoPin = 13;
int lastPiezoUpdate = 0;
const int duration[18] = {750, 50, 300, 100, 100, 200, 200, 50, 50, 50, 750, 50, 300, 100, 100, 200, 200, 150};


int notePlaying = 1;

int Notes[18] = {NOTE_D2, 0, NOTE_G2, 0, 0, NOTE_E2, NOTE_AS2, 0, 0, 0, NOTE_D3, 0, NOTE_G3, 0, 0, NOTE_F2, NOTE_A2, 0 };
int noteCount = 0;



void setup() {
  pinMode(LedPin_1, HIGH);
  pinMode(LedPin_2, LOW);

  // tone(piezoPin, NOTE_G3, 1000);
  digitalWrite(LedPin_1, HIGH);
  digitalWrite(LedPin_2, LOW);
}

void loop() {
  const int currentMillis = millis();
  if ((currentMillis - lastLedUpdate) >= ledPinInterval) {
    const int ledState_1 = digitalRead(LedPin_1);
    digitalWrite(LedPin_1, !ledState_1);
    const int ledState_2 = digitalRead(LedPin_2);
    digitalWrite(LedPin_2, !ledState_2);
    lastLedUpdate = currentMillis;
  }

  if ((currentMillis - lastPiezoUpdate) >= duration[noteCount] + 100) {
  
    int noteToPlay = Notes[noteCount];
    
    tone(piezoPin, noteToPlay, duration[noteCount]);

    int NoteLen = sizeof(Notes)/sizeof(Notes[0]);

    if (noteCount < NoteLen) {
    noteCount = noteCount + 1;}
    else 
    noteCount = 0;
    

    lastPiezoUpdate = currentMillis;
  }

}

