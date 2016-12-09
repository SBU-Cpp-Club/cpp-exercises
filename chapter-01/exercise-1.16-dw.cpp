#include <iostream>

int main()
{
  std::printf("Enter a set of numbers you'd like to sum:\n");
  int sum = 0;
  int x;
  while(std::cin >> x)
	{
	  sum += x;
	}
  std::printf("The sum of the numbers you entered is %i\n", sum);
  return 0;
}
