#pragma once

#include <graphics/drawable.h>
#include <graphics/line.h>

class Triangle : public Drawable {
public:
  Triangle(const Vector2i& v1, const Vector2i& v2, const Vector2i& v3);

private:
  Vector2i v1_;
  Vector2i v2_;
  Vector2i v3_;

  void GeneratePoints() override;
};