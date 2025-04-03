class PiezoManager {
private:
  int pin;
  const Note* Melody;
  int length;
  int noteCount;
  int lastUpdate;

public:
  PiezoManager(int pin, const Note* Melody, int length){
    this->pin = pin;
    this->Melody = Melody;
    this->length = length;
    lastUpdate = 0;
    noteCount = 0;
    tone(pin, Melody[0].pitch, Melody[0].duration);
  }
  void updateState(int currentMillis){
    if ((currentMillis - lastPiezoUpdate) >= Melody[noteCount].duration + 100) {
      
      noteCount++;
      if (noteCount == length) {
        noteCount = 0;
      }

      int noteToPlay = Melody[noteCount].pitch;
      tone(pin, noteToPlay, Melody[noteCount].duration);
    

      lastPiezoUpdate = currentMillis;
  }
};

PiezoManager piezoA = PiezoManager(13, Melody, 2);