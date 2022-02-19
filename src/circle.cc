#include <graphics/circle.h>

Circle::Circle(size_t radius, const Vector2i& center, size_t vertexs) : radius_(radius), center_(center), vertexs_(vertexs) {
  GeneratePoints();
}

void Circle::GeneratePoints() {
  double angle_portions = 2 * M_PI / vertexs_;
  double acumulate_angle = 0;

  while (acumulate_angle < 2 * M_PI) {
    Vector2i init;
    Vector2i end;
    init.x = radius_ * cos(acumulate_angle) + center_.x;
    init.y = radius_ * sin(acumulate_angle) + center_.y;

    acumulate_angle += angle_portions;
    end.x = radius_ * cos(acumulate_angle) + center_.x;
    end.y = radius_ * sin(acumulate_angle) + center_.y;

    Line line(init, end);
    points_.insert(points_.end(), line.GetPoints().begin(), line.GetPoints().end());
    acumulate_angle += angle_portions;
  }
}