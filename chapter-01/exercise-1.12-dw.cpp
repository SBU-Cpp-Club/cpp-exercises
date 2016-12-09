#include <iostream>

int main()
{
  int sum = 0;
  for(int i = -100; i <= 100; ++i)
	{
	  sum += i;
	}
  std::printf("The final value of sum is %i\n", sum);
  return 0;
}
