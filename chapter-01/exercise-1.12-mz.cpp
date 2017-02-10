#include <iostream>

int main()
{

  int sum = 0;
  for (int i = -100; i <= 100; ++i) 
    sum += 1;

  std::cout << "sum = " << sum << std::endl;

  return 0;
}
