#include "globals.h"
#include "util.h"

#include "main_intro.h"
#include "game_loop.h"
#include "game_over.h"

#include "snake.h"
#include "sprites.h"

typedef void (*Functionpointer) ();

const Functionpointer PROGMEM  mainGameLoop[] = {
  stateMainIntro,
  stateGameLoop,
  stateGameOver
};


void setup() 
{
  arduboy.begin();
  
  tunes.initChannel(PIN_SPEAKER_1);
  tunes.initChannel(PIN_SPEAKER_2);

  arduboy.setFrameRate(GAME_FRAME_RATE);

  arduboy.initRandomSeed();

  highscore = EEPROM.read(EEPROM_ADDRESS);
  if (highscore == 255) {
    highscore = 0;
    EEPROM.update(EEPROM_ADDRESS, highscore);
  }
}


void loop() 
{
  if (!(arduboy.nextFrame())) { 
    return;
  }
  
  arduboy.pollButtons();
  arduboy.clear();
  
  ((Functionpointer) pgm_read_word (&mainGameLoop[gameState]))();
  
  arduboy.display();
}
