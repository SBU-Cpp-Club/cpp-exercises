#include <iostream>

int main() {

  // on my machine a short is the same type as an int

  unsigned int a = 4294967295;
  std::cout << a+1 << std::endl;

  int b = 2147483647;
  std::cout << b+1 << std::endl;

  long c = 9223372036854775807;
  std::cout << c+1 << std::endl;

  return 0;

}
