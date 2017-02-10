//
//  Purpose:   Solution to exercise 1.6
//  Author:    D. Swesty
//  Date:      12/5/2016
//
//  Notes:     The code in the Exercise 1.6 example is illegal.  The
//             insertion operator must be preceded by a legitimate instance
//             out the cout object.
//
#include <iostream>

int main() {

  int v1, v2;      // Two variables to hold integer operands

  std::cout << "Please enter two integers:";

  std::cin >> v1 >>  v2;

  std::cout << " The sum of " << v1 ;
  std::cout << " and " << v2 ;
  std::cout << " is " << v1+v2 << std::endl;

  return 0;      // Return a value of 0 to the shell

} 
