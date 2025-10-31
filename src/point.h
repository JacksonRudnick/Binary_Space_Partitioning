// Author: Jackson Rudnick
// Coding Standards: Google C++ Style Guide
// Copyright 2025 Jackson Rudnick

#ifndef POINT_H
#define POINT_H

class Point {
 private:
  double x;
  double y;

 public:
  Point(double x, double y) : x(x), y(y) {}
  ~Point();

  void translate(double dx, double dy) {
    x += dx;
    y += dy;
  }

  double getX() const { return x; }
  double getY() const { return y; }

  void setX(double newX) { x = newX; }
  void setY(double newY) { y = newY; }
};

#endif  // POINT_H
