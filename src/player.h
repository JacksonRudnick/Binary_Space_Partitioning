// Author: Jackson Rudnick
// Coding Standards: Google C++ Style Guide
// Copyright 2025 Jackson Rudnick

#ifndef PLAYER_H
#define PLAYER_H

#define DEFAULT_PLAYER_POS Point(0.0, 0.0)

#define DEFAULT_PLAYER_VIEWPLANE Line(-1.0, 0.0, 1.0, 0.0)

#include "./line.h"
#include "./point.h"

class Player {
 private:
  Point position;
  Line viewPlane;

 public:
  explicit Player(const Point& startPos)
      : position(startPos), viewPlane(DEFAULT_PLAYER_VIEWPLANE) {}
  Player(double x, double y)
      : position(x, y), viewPlane(DEFAULT_PLAYER_VIEWPLANE) {}
  Player()
      : position(DEFAULT_PLAYER_POS), viewPlane(DEFAULT_PLAYER_VIEWPLANE) {}
  ~Player();

  void move(double dx, double dy) { position.translate(dx, dy); }

  Point getPosition() const { return position; }
  void setPosition(const Point& newPos) { position = newPos; }
};

#endif  // PLAYER_H
