//
//  Purpose:   Solution to exercise 1.22
//  Author:    D. Swesty
//  Date:      12/6/2016
//
//  Notes:     This program sums sales items and outputs the 
//             total sales statistics

#include <iostream>
#include "Sales_item.h"

int main() {

  Sales_item item, sum;              // Instances of sales item

  std::cout << " Enter items (ISBN = 000 terminates):";
  while(std::cin >> item) {

    if(item.isbn() == "000") { 
      std::cout << sum << std::endl; // Output the total book sales
      break; 
    }

    sum = sum+item;                  // Add the book costs to sum
  }

  return 0;      // Return a value of 0 to the shell

} 
