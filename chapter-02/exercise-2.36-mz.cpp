#include <iostream>

int main() {

  int a = 3, b = 4;
  decltype(a) c = a; // a is an int
  decltype((b)) d = a; // d is a int& that refers to a

  ++c;  // c is now 4
  ++d;  // a is now 4

  std::cout << a << b << c << d << std::endl;

  return 0;

}
