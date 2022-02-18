#pragma once

#include <graphics/drawable.h>
#include "vector2.h"

class Line : public Drawable {
public:
  Line(const Vector2i& start, const Vector2i& end);

private:
  Vector2i start_;
  Vector2i end_;

  void GeneratePoints() override;
};
