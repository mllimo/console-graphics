#pragma once

#include "drawable.h"
#include "vector2.h"

class Line : public Drawable {
public:
  Line(Vector2i start, Vector2i end);
  virtual void Draw(std::vector<std::vector<char>>& buffer) const override;

private:
  Vector2i start_;
  Vector2i end_;

  void GenerateMiddlePoints();
};
