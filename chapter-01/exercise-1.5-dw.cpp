#include <iostream>

int main()
{
  int x, y;
  std::printf("Enter two integers.\n");
  std::cin >> x >> y;
  std::printf("The first integer is %i\n", x);
  std::printf("The second integer is %i\n", y);
  std::printf("The product is %i\n", x * y);
  return 0;
}
