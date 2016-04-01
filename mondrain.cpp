#include <iostream>
#include "graphics.h"
#include "random.h"
using namespace std;

/* Constants */

const double MIN_AREA = 10000;   /* Smallest square that will be split */
const double MIN_EDGE = 20;      /* Smallest edge length allowed       */

/* Function prototypes */

void subdivideCanvas(double x, double y, double width, double height);

/* Main program */

int main() {
   initGraphics();
   subdivideCanvas(0, 0, getWindowWidth(), getWindowHeight());
   return 0;
}
void subdivideCanvas(double x, double y, double width, double height) {
   if (width * height >= MIN_AREA) {
      if (width > height) {
         double mid = randomReal(MIN_EDGE, width - MIN_EDGE);
         subdivideCanvas(x, y, mid, height);
         subdivideCanvas(x + mid, y, width - mid, height);
         drawLine(x + mid, y, x + mid, y + height);
      } else {
         double mid = randomReal(MIN_EDGE, height - MIN_EDGE);
         subdivideCanvas(x, y, width, mid);
         subdivideCanvas(x, y + mid, width, height - mid);
         drawLine(x, y + mid, x + width, y + mid);
      }
   }
}
