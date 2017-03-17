#include <iostream>

int main() {

  int a = 3, b = 4;
  decltype(a) c = a;  // c is int
  decltype(a = b) d = a; // d is int&

  a = 0;
  std::cout << d << std::endl;


  return 0;

}
