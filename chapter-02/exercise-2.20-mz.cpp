#include <iostream>

int main() {

  int i = 42;
  int *p1 = &i;
  
  // square i
  *p1 = *p1 * *p1;

  std::cout << "i = " << i << std::endl;

  return 0;

}
