#include <iostream>

int main()
{
  int x, y;
  std::printf("Enter two integers.\n");
  std::cin >> x >> y;
  std::printf("The product of %i and %i is %i\n", x, y, x * y);
  return 0;
}
