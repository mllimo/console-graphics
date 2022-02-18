#include <graphics/triangle.h>

Triangle::Triangle(const Vector2i& v1, const Vector2i& v2, const Vector2i& v3) : v1_(v1), v2_(v2), v3_(v3) {
  GeneratePoints();
}

void Triangle::GeneratePoints() {
  Line line1(v1_, v2_);
  Line line2(v2_, v3_);
  Line line3(v1_, v3_);
  
  points_.insert(points_.end(), line1.GetPoints().begin(), line1.GetPoints().end());
  points_.insert(points_.end(), line2.GetPoints().begin(), line2.GetPoints().end());
  points_.insert(points_.end(), line3.GetPoints().begin(), line3.GetPoints().end());
}