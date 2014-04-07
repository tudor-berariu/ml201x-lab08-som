// Tudor Berariu, 2014

#include <iostream>
#include "radius.h"

int main(int argc, char* argv[]) {
  int height = 20;
  int width = 20;
  int iter_count = 1000;

  for (int i = 1; i < iter_count; i++) {
    std::cout << i << "\t"
	      << radius(i, iter_count, height, width) << std::endl;
  }

  
}
