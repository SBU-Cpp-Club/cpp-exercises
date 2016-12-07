#include <iostream>

int main()
{

  int sum = 0;
  int x = 50;

  while (x <= 100) {
    sum += x;
    x += 1;
  }

  std::cout << "sum = " << sum << std::endl;

  return 0;
}
