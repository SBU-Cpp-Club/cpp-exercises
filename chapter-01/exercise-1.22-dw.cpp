#include <iostream>
#include "Sales_item.h"

int main()
{
  Sales_item book, book_sum;
  if (std::cin >> book)
	{
	  book_sum = book;
	  while(std::cin >> book)
		{
		  book_sum += book;
		}
	  std::cout << "The sum of the transactions is: "
				<< book_sum << std::endl;
	}
  return 0;
}
