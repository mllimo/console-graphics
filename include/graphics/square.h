#pragma once

#include <graphics/line.h>

class Square : public Drawable {
public:
  Square(const Vector2i& start, const Vector2i& end);

private:
  Vector2i start_;
  Vector2i end_;

  void GeneratePoints() override;
};