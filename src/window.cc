#pragma once

#include <graphics/window.h>

Window::Window(int width, int height) {
  width_ = width;
  height_ = height;
  BuildBuffer();
}

void Window::Draw(const Drawable& drawable) {
  drawable.Draw(buffer_);
}

void Window::Display() {
  for (auto& row : buffer_) {
    for (auto& c : row) {
      std::cout << c;
    }
    std::cout << std::endl;
  }
}

void Window::BuildBuffer() {
  buffer_.resize(height_);
  for (auto& row : buffer_) {
    row.resize(width_, ' ');
  }
}

void Window::Clean() {
  for (auto& row : buffer_) {
    for (auto& c : row) {
      c = ' ';
    }
  }
}