class LedManager {
private:
  int pin;
  int interval;
  int lastUpdate;
  bool flip;
public:
  LedManager(int pin, int interval, bool flip){
    this->pin = pin;
    this->interval = interval;
    lastUpdate = 0;
    this->flip = flip;
    pinMode(pin, OUTPUT);
  }
  void updateState(int currentMillis){
    // first iteration
    if (flip == true){
        digitalWrite(pin, HIGH);
        flip = false;
    }

    // next iterations
    if ((currentMillis - lastUpdate) >= interval) {
      const int ledState = digitalRead(pin);
      digitalWrite(pin, !ledState);
      lastUpdate = currentMillis;
    }
  }
};

LedManager led = LedManager(6, 1000, false);
LedManager led2 = LedManager(7, 1000, true);


