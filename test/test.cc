#include <graphics/window.h>
#include <graphics/circle.h>

int main() {
  Window window(100, 50);
  Circle circle(20, {50, 20}, 20);
  window.Draw(circle);
  window.Display();
  return 0;
}