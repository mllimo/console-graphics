#include <graphics/square.h>

Square::Square(const Vector2i& start, const Vector2i& end) : start_(start), end_(end) {
  GeneratePoints();
}

void Square::GeneratePoints() {
  Vector2i right_top(end_.x, start_.y);
  Vector2i left_bottom(start_.x, end_.y);

  Line line1(start_, right_top);
  Line line2(right_top, end_);
  Line line3(end_, left_bottom);
  Line line4(left_bottom, start_);

  points_.insert(points_.end(), line1.GetPoints().begin(), line1.GetPoints().end());
  points_.insert(points_.end(), line2.GetPoints().begin(), line2.GetPoints().end());
  points_.insert(points_.end(), line3.GetPoints().begin(), line3.GetPoints().end());
  points_.insert(points_.end(), line4.GetPoints().begin(), line4.GetPoints().end());
}