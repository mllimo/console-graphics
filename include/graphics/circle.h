#define _USE_MATH_DEFINES
#include <cmath>

#include <graphics/line.h>

class Circle : public Drawable {
  public:
    Circle(size_t radius, const Vector2i& center, size_t vertexs);

  private:
    size_t radius_;
    Vector2i center_;
    size_t vertexs_;

    void GeneratePoints() override;
};