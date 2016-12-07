//
//  Purpose:   Solution to exercise 1.9
//  Author:    D. Swesty
//  Date:      12/5/2016
//
//  Notes:     This code demonstrates how to use a while loop
//             to sum numbers

#include <iostream>

int main() {

  int sum=0;             // Variable to hold sum
  int number=50;         // Variable to track number

  while( number <= 100) {
    sum = sum+number;
    number = number+1;
  }

  std::cout << " Sum of integers from 50 to 100 is " << sum << std::endl;

  return 0;      // Return a value of 0 to the shell

} 
