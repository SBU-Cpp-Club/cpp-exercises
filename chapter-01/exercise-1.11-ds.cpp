//
//  Purpose:   Solution to exercise 1.11
//  Author:    D. Swesty
//  Date:      12/5/2016
//
//  Notes:     This code prints the integers in a range supplied
//             by the user

#include <iostream>

int main() {

  int ilower;            // Variable to hold lower end of integer range
  int iupper;            // Variable to hold upper end of integer range
  int number;            // Variable to track number

  std::cout << " Enter two integers i1 < i2:";
  std::cin >> ilower >> iupper ;

  number = ilower;       // Initialize number to ilower

  while( number <= iupper) {
    std::cout << number << std::endl;
    number++;
  }
  
  return 0;      // Return a value of 0 to the shell

} 
