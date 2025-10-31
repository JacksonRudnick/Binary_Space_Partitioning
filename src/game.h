// Author: Jackson Rudnick
// Coding Standards: Google C++ Style Guide
// Copyright 2025 Jackson Rudnick

#ifndef SRC_GAME_H
#define SRC_GAME_H

#include "./player.h"

class Game {
 private:
  Player player;

 public:
  Game();
  ~Game();

  void start();
  void pause();
  void resume();
  void end();
};

#endif  // SRC_GAME_H