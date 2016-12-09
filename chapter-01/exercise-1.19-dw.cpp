#include <iostream>

int sign(int x)
{
  return (x > 0) - (x < 0);
}

int main()
{
  int a, b, x, dx;
  std::printf("Enter two integers a, b \n");
  std::printf("and I'll print the numbers in \n");
  std::printf("the range defined by a ... b.\n");
  std::cin >> a >> b;
  std::printf("Printing the range %i ... %i:\n", a, b);
  dx = sign(b-a);
  x = a;
  while(x != b + dx)
	{
	  std::printf("%i\n", x);
	  x += dx;
	}
  return 0;
}
