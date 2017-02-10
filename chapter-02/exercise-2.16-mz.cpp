#include <iostream>

int main() {

  int i = 0, &r1 = i;
  double d = 0, &r2 = d;

  std::cout << "i = " << i << std::endl;
  std::cout << "r1 = " << r1 << std::endl;
  std::cout << "d = " << d << std::endl;
  std::cout << "r2 = " << r2 << std::endl;

  r2 = 3.14159;  // okay -- correct type

  std::cout << "now r2 = " << r2 << std::endl;
  std::cout << "now d = " << d << std::endl;

  r2 = r1;       // r2 is double, but r1 is int, so promotes

  std::cout << "now r2 = " << r2 << std::endl;
  std::cout << "now d = " << d << std::endl;

  i = r2;        // i is int, but r2 is double, so truncates?

  std::cout << "now i = " << i << std::endl;
  std::cout << "now r1 = " << r1 << std::endl;

  r1 = d;        // r1 is int, r2 is double, so truncates

  std::cout << "now i = " << i << std::endl;
  std::cout << "now r1 = " << r1 << std::endl;


}
