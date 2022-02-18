#include <graphics/line.h>

Line::Line(const Vector2i& start, const Vector2i& end) : start_(start), end_(end) {
  GeneratePoints();
}

void Line::GeneratePoints() {
  float m;
  float b;

  if (start_.x == end_.x) {
    m = 0;
    b = start_.y;
  } else {
    m = (float)(end_.y - start_.y) / (float)(end_.x - start_.x);
    b = start_.y - m * start_.x;
  }

  if (start_.x != end_.x) {
    Vector2i start = (start_.x < end_.x) ? start_ : end_;
    Vector2i end = (start_.x < end_.x) ? end_ : start_;
    for (int x = start.x; x <= end.x; ++x) {
      int y = m * x + b;
      points_.push_back({x, y});
    }
  } else {
    Vector2i start = (start_.y < end_.y) ? start_ : end_;
    Vector2i end = (start_.y < end_.y) ? end_ : start_;
    for (int y = start.y; y <= end.y; ++y) {
      int x = start.x;
      points_.push_back({x, y});
    }
  }
}