// Tudor Berariu, 2014

#include <iostream>
#include "learning_rate.h"

int main(int argc, char* argv[]) {
  for (int i = 1; i < 1000; i++) {
    std::cout << i << "\t" << learning_rate(i, 1000) << std::endl;
  }
  return 0;
}
