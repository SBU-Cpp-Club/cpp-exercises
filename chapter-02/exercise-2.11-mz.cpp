#include <iostream>

extern int ix;

int sub();


int main() {
  
  int ix = 1.0;

  std::cout << ix << std::endl;

  sub();

  std::cout << ix << std::endl;

}


int sub() {

  double ix = 2.0;

  return 1;

}
