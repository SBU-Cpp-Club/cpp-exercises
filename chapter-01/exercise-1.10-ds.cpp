//
//  Purpose:   Solution to exercise 1.10
//  Author:    D. Swesty
//  Date:      12/5/2016
//
//  Notes:     This code demonstrates how to the postfix decrement
//             operator to count down from 10 to zero.

#include <iostream>

int main() {

  int number=10;         // Variable to track number

  while( number >= 0) {
    std::cout << number << std::endl;
    number--;
  }
  
  return 0;      // Return a value of 0 to the shell

} 
