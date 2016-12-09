#include <iostream>

int main()
{
  int x = 0;
  for(int i = 50; i <= 100; ++i)
	{
	  x += i;
	}
  std::printf("The sum of the numbers 50 through 100 is %i.\n", x);
  return 0;
}
