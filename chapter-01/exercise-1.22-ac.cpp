//
// compile with g++ -std=c++11 -o x1.20 exercise-1.20-ac.cpp
//
//  here borrowing from the example that follows this assignment.
//
#include<iostream>
#include "Sales_item.h"

int main()
{
   Sales_item book, sum;
   std::cout  << "Enter ISBN, number of copies sold, and sales price of books" << std::endl;
   std::cin >> sum;
   while (std::cin >> book) {
       if (book.isbn() == sum.isbn()) {
           sum += book;
       } else {
           std::cout << "Must be the same ISBN!" << std::endl;
           return -1;
       }
   }
   std::cout  << "Total sale is " << sum << std::endl;
   return 0;
}


