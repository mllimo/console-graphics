#pragma once

template <typename T>
class Vector2 {
public:
  T x;
  T y;

  Vector2(T x, T y) : x(x), y(y) {}
  Vector2() : x(0), y(0) {}
};

typedef Vector2<int> Vector2i;
typedef Vector2<float> Vector2f;