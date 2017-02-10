//
// compile with g++ -std=c++11 -o x1.20 exercise-1.20-ac.cpp
//
//
//
#include<iostream>
#include "Sales_item.h"

int main()
{
   Sales_item book;
   std::cout  << "Enter ISBN, number of copies sold, and sales price" << std::endl;
   std::cin >> book;
   std::cout  << "Your sale: " << book << std::endl;
   return 0;
}


