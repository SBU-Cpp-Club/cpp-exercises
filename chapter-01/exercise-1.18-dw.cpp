#include <iostream>

int main()
{
  int cv = 0, v = 0;
  if (std::cin >> cv)
	{
	  int n = 1;
	  while(std::cin >> v)
		{
		  if (cv == v) ++n;
		  else
			{
			  std::printf("\n%i occurs %i times.\n", cv, n);
			  cv = v;
			  n = 1;
			}
		}
	  std::printf("\n%i occurs %i times.\n", cv, n);
	}
  return 0;
}
