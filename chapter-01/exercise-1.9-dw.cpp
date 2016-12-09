#include <iostream>

int main()
{
  int x = 0;
  int i = 50;
  while(i <= 100)
	{
	  x += i;
	  ++i;
	}
  std::printf("The sum of the numbers 50 through 100 is %i.\n", x);
  return 0;
}
