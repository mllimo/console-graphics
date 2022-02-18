#pragma once

#include <vector>
#include <iostream>

#include "drawable.h"

class Window {
public:
  Window(int width, int height);
  
  void Draw(const Drawable& drawable);
  void Display();
  void Clean();

private:
  std::vector<std::vector<char>> buffer_;
  size_t width_;
  size_t height_;

  void BuildBuffer();
};