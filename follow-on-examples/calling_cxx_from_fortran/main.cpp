#include <iostream>
#include "extern.h"

int main() {

  x = 0.0;

  std::cout << x << std::endl;

  do_fortran();

  std::cout << x << std::endl;

  return 0;
}
