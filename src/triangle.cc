#include "triangle.h"

Triangle::Triangle(const Vector2i& v1, const Vector2i& v2, const Vector2i& v3) {
  GeneratePoints(v1, v2, v3);
}

void Triangle::Draw(std::vector<std::vector<char>>& buffer) const {
  for (auto& point : points_) {
    buffer[point.y][point.x] = '*';
  }
}


void Triangle::GeneratePoints(const Vector2i& v1, const Vector2i& v2, const Vector2i& v3) {
  Line line1(v1, v2);
  Line line2(v2, v3);
  Line line3(v1, v3);
  
  points_.insert(points_.end(), line1.GetPoints().begin(), line1.GetPoints().end());
  points_.insert(points_.end(), line2.GetPoints().begin(), line2.GetPoints().end());
  points_.insert(points_.end(), line3.GetPoints().begin(), line3.GetPoints().end());
}