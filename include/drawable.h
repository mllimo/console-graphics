#pragma once

#include <vector>

#include "vector2.h"

class Drawable {
public:
  virtual void Draw(std::vector<std::vector<char>>& target) const {};
  const std::vector<Vector2i>& GetPoints() const { return points_; } 
protected:
  std::vector<Vector2i> points_;
};