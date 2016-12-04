#include <iostream>

int main()
{

  int x = 0, y = 0;

  std::cout << "Enter min and max: " << std::endl;
  std::cin >> x >> y;

  // assumes the x < y
  while (x <= y) {
    std::cout << x << std::endl;
    x++;
  }

  return 0;
}
