int buzzer = 8;

// Note (Hz)
#define C4 262
#define D4 294
#define E4 330
#define F4 349
#define G4 392
#define A4 440
#define B4 494
#define C5 523
#define Bb4 466  // Si bemolle


void setup() {
  pinMode(buzzer, OUTPUT);
}

void loop() {
  // "Buon Compleanno" melody
  int melody[] = {
    C4, C4, D4, C4, F4, E4,   // Buon compleanno a te
    C4, C4, D4, C4, G4, F4,   // Buon compleanno a te
    C4, C4, C5, A4, F4, E4, D4, // Buon compleanno caro/a [nome]
    Bb4, Bb4, A4, F4, G4, F4,    // Buon compleanno a te
  };

  // Durata delle note (millisecondi)
  int duration[] = {
    400, 200, 600, 600, 600, 800,
    400, 200, 600, 600, 600, 800,
    400, 200, 600, 600, 600, 600, 800,
    400, 200, 600, 600, 600, 800
  };

  int notes = sizeof(melody)/sizeof(melody[0]);

  for (int i = 0; i < notes; i++) {
    tone(buzzer, melody[i], duration[i]);
    delay(duration[i] + 50); // piccola pausa tra le note
  }

  delay(3000); // pausa prima di ripetere
}
