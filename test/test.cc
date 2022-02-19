#include <graphics/window.h>
#include <graphics/circle.h>

int main() {
  Window window(100, 50);
  Circle circle(20, {50, 20}, 5); // pentagon
  window.Draw(circle);
  window.Display();
  return 0;
}