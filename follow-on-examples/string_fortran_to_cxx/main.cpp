#include <iostream>

#include "func_F.H"

int main() {

  init();

  int i = 0;
  get_i(i);

  std::cout << "i = " << i << std::endl;

  char string[33];

  get_str(string);

  std::cout << "mystring = " << string << std::endl;

  return 0;

}
