#include <iostream>

int main() {

  int *ap = nullptr;
  int a;

  std::cout << "ap = " << ap << std::endl;
  
  a = 2.0;

  ap = &a;

  std::cout << "ap = " << ap << " *ap = " << *ap << std::endl;

  *ap = 5.0;

  std::cout << "ap = " << ap << " *ap = " << *ap << " a = " << a << std::endl;

  
  return 0;

}
