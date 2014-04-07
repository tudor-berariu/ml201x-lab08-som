// Tudor Berariu, 2014

#ifndef NEIGHBOURHOOD_H
#define NEIGHBOURHOOD_H

struct Mask {
  int height, width;
  int** mask;
};

Mask* neighbourhood(int y, int x, float radius, int height, int width);

#endif
