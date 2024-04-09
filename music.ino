#include <pitches.h>
int melodyOver[] = {
  NOTE_E5, NOTE_D5, NOTE_FS4, NOTE_GS4,
  NOTE_CS5, NOTE_B4, NOTE_D4, NOTE_E4,
  NOTE_B4, NOTE_A4, NOTE_CS4, NOTE_E4,
  NOTE_A4
};

int durationsFail[] = {
  8, 8, 4, 4,
  8, 8, 4, 4,
  8, 8, 4, 4,
  2
};
int melodyWinning[] = {
  NOTE_CS4, NOTE_E4, NOTE_CS4, NOTE_CS4, NOTE_E4,
  NOTE_CS4, NOTE_CS4, NOTE_E4, NOTE_CS4, NOTE_DS4,
  NOTE_CS4, NOTE_CS4, NOTE_E4, NOTE_CS4,
  NOTE_B3,
  NOTE_CS4, NOTE_E4, NOTE_CS4, NOTE_CS4, NOTE_E4,
  NOTE_CS4, NOTE_DS4, NOTE_CS4, NOTE_E4,
  NOTE_B3,
  NOTE_E4, NOTE_E4, NOTE_E4, NOTE_E4, NOTE_E4, NOTE_E4, NOTE_E4, NOTE_E4, NOTE_E4,
  NOTE_E4, NOTE_E4, NOTE_E4, NOTE_E4, NOTE_FS4, NOTE_GS4, NOTE_GS4,
  NOTE_GS4, NOTE_E4, NOTE_FS4, NOTE_B4, NOTE_GS4, NOTE_GS4, NOTE_GS4, NOTE_GS4, NOTE_GS4,
  NOTE_FS4, NOTE_FS4, NOTE_FS4, NOTE_GS4, NOTE_FS4, NOTE_FS4, NOTE_FS4, NOTE_FS4, NOTE_FS4, NOTE_GS4, NOTE_FS4,
  NOTE_E4, NOTE_CS4, NOTE_CS4, NOTE_GS4, NOTE_GS4,
  NOTE_GS4, NOTE_GS4, NOTE_GS4, NOTE_GS4, NOTE_GS4, NOTE_GS4, NOTE_GS4, NOTE_GS4, NOTE_GS4,
  NOTE_GS4, NOTE_B4, NOTE_GS4, NOTE_GS4, NOTE_FS4, NOTE_FS4, NOTE_E4, NOTE_GS4,
  NOTE_FS4, NOTE_E4, NOTE_E4, NOTE_E4, NOTE_B4, NOTE_GS4, NOTE_GS4, NOTE_GS4, NOTE_FS4,
  NOTE_FS4, NOTE_FS4, NOTE_FS4, NOTE_FS4, NOTE_FS4, NOTE_FS4, NOTE_FS4, NOTE_FS4,
  NOTE_E4, NOTE_CS4, NOTE_CS4, NOTE_CS4, NOTE_CS4, NOTE_CS4,
  NOTE_GS3, NOTE_B3,
  NOTE_CS4, NOTE_CS4, NOTE_FS4, NOTE_GS4, NOTE_E4, NOTE_FS4,
  NOTE_B3,
  NOTE_E4, NOTE_FS4, NOTE_GS4, NOTE_FS4, NOTE_E4, NOTE_CS4, NOTE_E4, NOTE_GS4,
  NOTE_FS4, NOTE_E4, NOTE_FS4, NOTE_CS4, NOTE_B4, NOTE_GS4, NOTE_GS4, NOTE_FS4, NOTE_FS4,
  NOTE_E4, NOTE_CS4, NOTE_E4, NOTE_FS4, NOTE_GS4, NOTE_FS4, NOTE_E4,
  NOTE_FS4, NOTE_E4, NOTE_CS4, NOTE_CS4,
  NOTE_B3,
  NOTE_CS4, NOTE_CS4, NOTE_FS4, NOTE_GS4, NOTE_E4, NOTE_FS4, NOTE_FS4,
  NOTE_B3,
  NOTE_FS4, NOTE_GS4, NOTE_FS4, NOTE_E4, NOTE_CS4, NOTE_E4, NOTE_GS4, NOTE_FS4,
  NOTE_E4, NOTE_FS4, NOTE_CS4, NOTE_B4, NOTE_GS4, NOTE_GS4, NOTE_FS4, NOTE_FS4, NOTE_E4,
  NOTE_CS4, NOTE_B4, NOTE_GS4, NOTE_GS4, NOTE_FS4, NOTE_FS4, NOTE_E4,
  NOTE_CS4, NOTE_CS4,
  NOTE_GS3, NOTE_B3,
  NOTE_E4, NOTE_FS4, NOTE_GS4, NOTE_FS4, NOTE_E4, NOTE_E4, NOTE_E4, NOTE_FS4, NOTE_FS4,
  NOTE_E4, NOTE_FS4, NOTE_GS4, NOTE_FS4, NOTE_E4, NOTE_E4, NOTE_E4, NOTE_FS4 |
  NOTE_CS4, NOTE_E4, NOTE_FS4, NOTE_GS4, NOTE_CS4,
  NOTE_E4, NOTE_E4, NOTE_FS4, NOTE_FS4, NOTE_E4, NOTE_FS4, NOTE_GS4,
  NOTE_FS4, NOTE_E4, NOTE_E4, NOTE_FS4, NOTE_CS4, NOTE_CS4,
  NOTE_FS4, NOTE_GS4, NOTE_B4, NOTE_GS4, NOTE_FS4, NOTE_E4, NOTE_E4, NOTE_FS4,
  NOTE_E4, NOTE_FS4, NOTE_GS4, NOTE_FS4, NOTE_E4, NOTE_E4, NOTE_FS4,
  NOTE_CS4, NOTE_CS4, NOTE_CS4, NOTE_CS4, NOTE_CS4, NOTE_E4, NOTE_FS4, NOTE_GS4, NOTE_CS4, NOTE_E4,
  NOTE_FS4, NOTE_E4, NOTE_FS4, NOTE_E4, NOTE_FS4, NOTE_GS4,
  NOTE_FS4, NOTE_E4, NOTE_E4, NOTE_FS4, NOTE_CS4, NOTE_CS4, NOTE_CS4, NOTE_E4, NOTE_E4,
  NOTE_FS4, NOTE_FS4, NOTE_GS4, NOTE_GS4,
  NOTE_E4, NOTE_FS4, NOTE_GS4, NOTE_FS4, NOTE_E4, NOTE_E4, NOTE_FS4, NOTE_CS4, NOTE_CS4,
  NOTE_CS4, NOTE_E4, NOTE_E4, NOTE_FS4, NOTE_FS4, NOTE_GS4,
  NOTE_GS4, NOTE_E4, NOTE_FS4, NOTE_GS4, NOTE_FS4,
  NOTE_E4, NOTE_E4, NOTE_FS4, NOTE_CS4, NOTE_CS4, NOTE_CS4, NOTE_E4, NOTE_E4,
  NOTE_FS4, NOTE_FS4, NOTE_GS4, NOTE_GS4,
  NOTE_E4, NOTE_FS4, NOTE_GS4, NOTE_FS4, NOTE_E4, NOTE_E4, NOTE_FS4, NOTE_CS4, NOTE_CS4,
  NOTE_CS4, NOTE_CS4, NOTE_CS4, NOTE_CS4, NOTE_E4, NOTE_FS4, NOTE_GS4, NOTE_CS4, NOTE_E4, NOTE_FS4,
  NOTE_CS4,
};
int durationsWinning[] = {
  2, 2, 4, 2, 2, 4, 2, 2, 4, 2, 2, 2, 2, 2, 2, 2, 2, 4, 2, 2, 4, 2, 2, 2, 2, 8, 8, 4, 4, 8, 8, 8, 8, 8, 8, 8, 2, 8, 8, 4, 2, 8, 8, 4, 8, 8, 8, 4, 4, 8, 8, 8, 8, 8, 4, 8, 4, 8, 8, 8, 8, 4, 2, 8, 8, 8, 8, 4, 8, 8, 8, 8, 8, 8, 2, 8, 4, 8, 8, 8, 8, 8, 2, 4, 8, 8, 2, 4, 8, 8, 8, 8, 8, 8, 2, 8, 8, 4, 4, 4, 8, 8, 2, 4, 4, 2, 4, 2, 2, 4, 8, 8, 8, 2, 2, 8, 4, 8, 4, 4, 4, 4, 8, 8, 8, 8, 2, 8, 8, 4, 8, 8, 4, 2, 8, 4, 8, 4, 4, 4, 4, 2, 2, 2, 2, 4, 8, 8, 8, 2, 2, 2, 4, 8, 4, 4, 4, 4, 8, 8, 8, 8, 2, 8, 8, 4, 8, 8, 4, 2, 8, 8, 4, 8, 8, 4, 2, 2, 4, 2, 8, 8, 4, 8, 8, 4, 8, 8, 2, 8, 8, 4, 8, 8, 4, 8, 8, 2, 8, 8, 4, 4, 4, 8, 8, 2, 8, 8, 4, 8, 8, 8, 4, 8, 2, 4, 4, 8, 8, 4, 4, 8, 2, 8, 8, 4, 4, 4, 8, 8, 4, 8, 8, 8, 8, 8, 8, 4, 4, 4, 4, 8, 2, 8, 8, 4, 8, 8, 8, 4, 8, 4, 4, 4, 4, 4, 4, 4, 2, 8, 8, 4, 8, 8, 8, 4, 8, 4, 4, 4, 4, 4, 4, 4, 2, 8, 8, 4, 8, 8, 8, 4, 8, 4, 4, 4, 4, 4, 4, 4, 2, 8, 8, 4, 8, 8, 8, 4, 8, 4, 8, 8, 8, 8, 8, 8, 4, 4, 4, 4, 2
};
//  int notes[10] = {261, 277, 294, 311, 330, 349, 370, 392, 415, 440};
//            mid C  C#   D    D#   E    F    F#   G    G#   A

const int notes[4] = {440, 392, 349, 330};
// constants won't change. They're used here to set pin numbers:

const uint8_t buttonPins[] = { 2, 3, 4, 5};

const int musicPin =  6;
// the number of the LED pin
const uint8_t ledPins[] = {13, 12, 11, 10 };
//shift register
const int DATA_PIN = 7;
const int LATCH_PIN = 8;
const int CLOCK_PIN = 9;

/* Digit table for the 7-segment display */
const byte digitPatterns[] = {
  B00111111,  // Digit 0
  B00000110,  // Digit 1
  B01011011,  // Digit 2
  B01001111,  // Digit 3
  B01100110,  // Digit 4
  B01101101,  // Digit 5
  B01111101,  // Digit 6
  B00000111,  // Digit 7
  B01111111,  // Digit 8
  B01101111   // Digit 9
};

// variables will change:
int buttonYState = 0;         // variable for reading the pushbutton status
int buttonRState = 0;
int buttonGState = 0;
int buttonBState = 0;

uint8_t gameSequence = 0;
uint8_t turns[10] = {0};

bool valid_turn(byte computerChoice, byte playerChoice)
{
  Serial.println((turns[computerChoice] == playerChoice));
  return (turns[computerChoice] == playerChoice);

}
void lightLed(byte ledChoice)
{
  digitalWrite(ledPins[ledChoice], HIGH);
  delay(600);
  digitalWrite(ledPins[ledChoice], LOW);
}


void makeTurn()
{
  if (gameSequence < 10)
  {
    uint8_t newChoice = random(0, 4);
    turns[gameSequence] = newChoice;
  }
  int i;
  for (i = 0; i <= gameSequence; i++)
  {
    byte currentLedAndSound = turns[i];
    playLightAndSound(currentLedAndSound);
  }
}



void playSound(byte choice) {

  tone(musicPin, notes[choice]); //accesses spots on the array.
}
byte waitChoice() {
  byte i;
  while (1)
  {
    for (i = 0; i < 4; i++) {
      if (digitalRead(buttonPins[i]) == HIGH)
      {
        return i;
      }
    }
  }
  return 255;
}
void playLevelUpSound() {
  tone(musicPin, NOTE_E4);
  delay(150);
  tone(musicPin, NOTE_G4);
  delay(150);
  tone(musicPin, NOTE_E5);
  delay(150);
  tone(musicPin, NOTE_C5);
  delay(150);
  tone(musicPin, NOTE_D5);
  delay(150);
  tone(musicPin, NOTE_G5);
  delay(150);
  noTone(musicPin);
}
void playWinningMusic() {
  int size = sizeof(durationsWinning) / sizeof(int);

  for (int note = 0; note < size; note++) {
    //to calculate the note duration, take one second divided by the note type.
    //e.g. quarter note = 1000 / 4, eighth note = 1000/8, etc.
    int duration = 1000 / durationsWinning[note];
    tone(6, melodyWinning[note], duration);

    //to distinguish the notes, set a minimum time between them.
    //the note's duration + 30% seems to work well:
    int pauseBetweenNotes = duration * 1.30;
    delay(pauseBetweenNotes);

    //stop the tone playing:
    noTone(6);
  }
}
void resetGame() {
  memset(turns, 0x00, 10);
  gameSequence = 0;
}

void playSongFail() {
  int size = sizeof(durationsFail) / sizeof(int);

  for (int note = 0; note < size; note++) {
    //to calculate the note duration, take one second divided by the note type.
    //e.g. quarter note = 1000 / 4, eighth note = 1000/8, etc.
    int duration = 1000 / durationsFail[note];
    tone(6, melodyOver[note], duration);

    //to distinguish the notes, set a minimum time between them.
    //the note's duration + 30% seems to work well:
    int pauseBetweenNotes = duration * 1.30;
    delay(pauseBetweenNotes);

    //stop the tone playing:
    noTone(6);
  }
}
void gameOver() {
  playSongFail();
  resetGame();
}
void playLightAndSound(byte choice) {
  playSound(choice);
  lightLed(choice);
  noTone(musicPin);
}
bool playerTurn() {
  byte i;
  for (i = 0; i < gameSequence; i++)
  {
    byte playerTurn = waitChoice();
    if (playerTurn == 255)
      return false;
    Serial.print("playerTurn ");
    Serial.println(playerTurn);
    playLightAndSound(playerTurn);
    if (!valid_turn(i, playerTurn))
    {
      Serial.println("gameOver");
      gameOver();
      return false;
    }

  }
  return true;
}
void begin_round()
{
  displayScore();
  makeTurn(); // random();
  Serial.print("color ");
  Serial.println(turns[gameSequence]);
  gameSequence++;
  //logic
  if (!playerTurn())
    return;

  Serial.print("gameSequence ");
  Serial.println(gameSequence);



  if (gameSequence > 9)
  {
    playWinningMusic();
    resetGame();
  }
  else {
    playLevelUpSound();
    delay(300);
  }

}



void setup() {

  Serial.begin(9600);
  pinMode(musicPin, OUTPUT);
  // initialize the LED pin as an output:
  int i;
  for (i = 0; i < 4; i++) {
    pinMode(ledPins[i], OUTPUT);
  }

  // initialize the pushbutton pin as an input:
  for (i = 0; i < 4; i++) {
    pinMode(buttonPins[i], INPUT_PULLUP);
  }

  pinMode(DATA_PIN, OUTPUT);
  pinMode(LATCH_PIN, OUTPUT);
  pinMode(CLOCK_PIN,   OUTPUT);
}

//void displayScore() {
//  for (int numberToDisplay = 0; numberToDisplay < 10; numberToDisplay++) {
//    // take the latchPin low so
//    // the LEDs don't change while you're sending in bits:
//    digitalWrite(LATCH_PIN, LOW);
//    // shift out the bits:
//    shiftOut(DATA_PIN, CLOCK_PIN, MSBFIRST, digitPatterns[numberToDisplay]);
//    //take the latch pin high so the LEDs will light up:
//    digitalWrite(LATCH_PIN, HIGH);
//    // pause before next value:
//    delay(1000);
//  }
//}
void displayScore() {

  // take the latchPin low so
  // the LEDs don't change while you're sending in bits:
  digitalWrite(LATCH_PIN, LOW);
  // shift out the bits:
  shiftOut(DATA_PIN, CLOCK_PIN, MSBFIRST, digitPatterns[gameSequence]);
  //take the latch pin high so the LEDs will light up:
  digitalWrite(LATCH_PIN, HIGH);
  delay(700);
}
void loop() {


  // read the state of the pushbutton value:
  //  buttonYState = digitalRead(buttonYPin);
  //  buttonRState = digitalRead(buttonRPin);
  //  buttonGState = digitalRead(buttonGPin);
  //  buttonBState = digitalRead(buttonBPin);
  //displayScore();
  begin_round();
  //playSong(durationsFail, melodyOver);
}
