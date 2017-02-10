//
//  Purpose:   Solution to exercise 1.24
//  Author:    D. Swesty
//  Date:      12/7/2016
//
//  Notes:     This program sums a list of sales items (grouped according to 
//             ISBN number) and outputs the total sales statistics for each
//             unique ISBN

#include <iostream>
#include "Sales_item.h"

int main() {

  Sales_item item;                   // Most recent item
  Sales_item sum;                    // Sum of items of same type

  std::cout << " Enter items (ISBN = 000 terminates):";
  std::cin >> sum;                   // Read the first item into sum

  while(std::cin >> item) {          // While there are more items...

    if(item.isbn() == "000") {             // If item is "000"
      std::cout << " Total for " <<
            sum << std::endl;               // Output the total for last book
      break;                                    // terminate loop

    } else if(item.isbn() == sum.isbn()) { // If item is same a previous item
      sum = sum+item;                          // Add the book costs to sum

    } else {                               // Otherwise...
      std::cout << " Total for " <<
            sum << std::endl;                 // Output the total for previous book
      sum = item;                             // Reset the sum to new item
    }
  }

  return 0;                          // Return a value of 0 to the shell

} 
