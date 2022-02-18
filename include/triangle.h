#pragma once

#include "drawable.h"
#include "line.h"

class Triangle : public Drawable {
public:
  Triangle(const Vector2i& v1, const Vector2i& v2, const Vector2i& v3);
  void Draw(std::vector<std::vector<char>>& buffer) const override;

private:
  void GeneratePoints(const Vector2i& v1, const Vector2i& v2, const Vector2i& v3);
};