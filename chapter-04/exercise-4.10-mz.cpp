#include <iostream>

int main() {

  int a;
  while (std::cin >> a && a != 42)
    std::cout << a << std::endl;

  return 0;

}
