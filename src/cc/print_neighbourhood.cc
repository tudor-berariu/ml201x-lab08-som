// Tudor Berariu, 2014

#include "neighbourhood.h"
#include <iostream>

int main(int argc, char *argv[]) {
  int y = std::stoi(argv[1]);
  int x = std::stoi(argv[2]);
  float radius = std::stof(argv[3]);
  int height = std::stoi(argv[4]);
  int width = std::stoi(argv[5]);

  Mask* mask = neighbourhood(y, x, radius, height, width);

  for (int l = 0; l < mask->height; l++) {
    for (int c = 0; c < mask->width; c++) {
      std::cout << mask->mask[l][c] << " ";
    }
    std::cout << std::endl;
  }

  return 0;
}
