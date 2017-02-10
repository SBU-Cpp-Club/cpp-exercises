//
//  Purpose:   Solution to exercise 1.21
//  Author:    D. Swesty
//  Date:      12/5/2016
//
//  Notes:     This program adds two sales items and outputs the 
//             total sales statistics

#include <iostream>
#include "Sales_item.h"

int main() {

  Sales_item item1, item2;                   // Instances of sales item

  std::cout << " Enter two items:";
  std::cin >> item1 >> item2 ;

  std::cout << item1 + item2 << std::endl;  // Add the book costs & output
  
  return 0;      // Return a value of 0 to the shell

} 
