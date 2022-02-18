#pragma once

#include <vector>

#include <graphics/vector2.h>

class Drawable {
public:
  virtual void Draw(std::vector<std::vector<char>>& target) const {
    for (auto point : points_) {
      target[point.y][point.x] = '*';
    }
  };

  const std::vector<Vector2i>& GetPoints() const { return points_; }
protected:
  std::vector<Vector2i> points_;
  
  virtual void GeneratePoints() {}
};