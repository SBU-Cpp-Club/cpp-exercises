#include <iostream>
#include "Sales_item.h"

int main()
{
  Sales_item book1, book2;
  std::cout << "Enter the first sales item:" << std::endl;
  std::cin >> book1;
  std::cout << "Enter the second sales item:" << std::endl;
  std::cin >> book2;
  std::cout << "Here's their sum: " << book1 + book2 << std::endl;
  return 0;
}
