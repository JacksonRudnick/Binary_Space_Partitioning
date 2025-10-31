// Author: Jackson Rudnick
// Coding Standards: Google C++ Style Guide
// Copyright 2025 Jackson Rudnick

#ifndef SRC_LINE_H
#define SRC_LINE_H

#include "./point.h"

class Line {
 private:
  Point v1;
  Point v2;

 public:
  Line(const Point& start, const Point& end) : v1(start), v2(end) {}
  Line(double x1, double y1, double x2, double y2) : v1(x1, y1), v2(x2, y2) {}
  ~Line();
};

#endif  // SRC_LINE_H