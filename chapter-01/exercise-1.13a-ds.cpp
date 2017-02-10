//
//  Purpose:   Solution to exercise 1.13a
//  Author:    D. Swesty
//  Date:      12/5/2016
//
//  Notes:     This code demonstrates how to use for loop
//             to sum numbers (rewrite of exercise 1.9)

#include <iostream>

int main() {

  int sum;               // Variable to hold sum
  int number;            // Variable to track number

  for(sum=0, number=50; number <=100; number++) {
    sum = sum+number;
  }

  std::cout << " Sum of integers from 50 to 100 is " << sum << std::endl;

  return 0;      // Return a value of 0 to the shell

} 
