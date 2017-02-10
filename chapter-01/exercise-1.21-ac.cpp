//
// compile with g++ -std=c++11 -o x1.20 exercise-1.20-ac.cpp
//
//
//
#include<iostream>
#include "Sales_item.h"

int main()
{
   Sales_item book1, book2;
   std::cout  << "Enter ISBN, number of copies sold, and sales price" << std::endl;
   std::cin >> book1;
   std::cout  << "Enter ISBN, number of copies sold, and sales price" << std::endl;
   std::cin >> book2;
   std::cout  << "Total sale: " << book1 + book2 << std::endl;
   return 0;
}


