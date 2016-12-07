/*
 * Reads a set of book sales transactions and writes each to standard output
 * it uses Sales_item.h
 * */

#include <iostream>
#include "Sales_item.h"


int main()
{
    Sales_item book;


   
    while( std::cin >> book )
        std::cout << book << std::endl;

    return 0;
}
