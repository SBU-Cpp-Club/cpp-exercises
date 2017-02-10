//
//  Purpose:   Solution to exercise 1.4
//  Author:    D. Swesty
//  Date:      12/5/2016
//
//  Notes:     This program prompts the user for two ints, multiplies
//             the two ints, and then outputs the result to STDOUT
//
#include <iostream>

int main() {

  int int1, int2;      // Two variables to hold integer factors

  std::cout << "Please enter two integers:";

  std::cin >> int1 >>  int2;

  std::cout << " The product of " << int1 << " and " << int2
            << " is " << int1*int2 << std::endl;

  return 0;     // Return a value of 0 to the shell

} 
