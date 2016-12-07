//
//  Purpose:   Solution to exercise 1.13b
//  Author:    D. Swesty
//  Date:      12/5/2016
//
//  Notes:     This code demonstrates how to a for loop and the the postfix 
//             decrement operator to count down from 10 to zero. (Rewrite
//             of exercise 1.10)

#include <iostream>

int main() {

  int number;           // Variable to track number

  for(number=10; number >= 0; number--) {
    std::cout << number << std::endl;
  }
  
  return 0;      // Return a value of 0 to the shell

} 
