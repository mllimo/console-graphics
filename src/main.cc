#include "window.h"
#include "line.h"
#include "triangle.h"

int main() {
  Window window(40, 20);
  //Triangle polygon({2, 10}, {8, 10}, {3, 5});
  //Triangle polygon2({2, 5}, {8, 5}, {8, 10});
  //Line line({ 2, 10 }, { 8, 10 });
  //Line line2({ 2, 5 }, { 2, 10 });
  //Line line3({ 8, 10 }, { 2, 5 });
  //window.Draw(line);
  //window.Draw(line2);
  //window.Draw(line3);
  //window.Draw(polygon2);
  Triangle polygon({2, 10}, {8, 10}, {2, 5});
  window.Draw(polygon);
  window.Display();

  return 0;
}