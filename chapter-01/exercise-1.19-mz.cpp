#include <iostream>

int main() 
{
  int start = 0;
  int end = 0;

  std::cout << "enter a starting and ending value to sum: " << std::endl;

  std::cin >> start >> end;

  if (start > end) {
    for (int i = start; i >= end; i--)
      std::cout << i << std::endl;

  } else {
    for (int i = start; i <= end; i++)
      std::cout << i << std::endl;
  }

  return 0;
}
