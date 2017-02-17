#include <iostream>

#include "extern.h"

int counter;

int main() {

  counter += 1;

  std::cout << "counter = " << counter << std::endl;

  extern_sub();

  std::cout << "counter = " << counter << std::endl;

}

