#include <iostream>

int main() {

  // should be -86
  int a = -30 * 3 + 21 / 5;
  std::cout << a << std::endl;

  // should be -18
  int b = -30 + 3 * 21 / 5;
  std::cout << b << std::endl;

  // should be 11
  int c = 30 / 3 + 21 % 5;
  std::cout << c << std::endl;  

  // should be -2
  int d = -30 / 3 * 21 % 4;
  std::cout << d << std::endl;  

  return 0;

}
