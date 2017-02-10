#include <iostream>
#include "Sales_item.h"

int main()
{
  Sales_item book, cbook;
  if (std::cin >> book)
	{
	  cbook = book;
	  int n = 1;
	  while(std::cin >> book)
		{
		  if (book.isbn() == cbook.isbn()) ++n;
		  else
			{
			  std::cout << "Logged " << n
						<< " transactions for ISBN " << cbook.isbn()
						<< std::endl;
			  cbook = book;
			  n = 1;
			}
		}
	  std::cout << "Logged " << n
				<< " transactions for ISBN " << cbook.isbn()
				<< std::endl;
	}
  return 0;
}
