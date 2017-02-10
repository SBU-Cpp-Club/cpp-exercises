//
//  Purpose:   Solution to exercise 1.19
//  Author:    D. Swesty
//  Date:      12/5/2016
//
//  Notes:     This code prints the integers in a range supplied by the
//             user even if the second number less than the first 

#include <iostream>

int main() {

  int i1, i2;            // Variables to hold input from user
  int ilower;            // Variable to hold lower end of integer range
  int iupper;            // Variable to hold upper end of integer range
  int number;            // Variable to track number

  std::cout << " Enter two integers i1 < i2:";
  std::cin >> i1 >> i2 ;

  if( i1 <= i2) {        // Figure out which number is lower
    ilower = i1;
    iupper = i2;
  } else {
    ilower = i2;
    iupper = i1;
  }

  number = ilower;       // Initialize number to ilower

  while( number <= iupper) {
    std::cout << number << std::endl;
    number++;
  }
  
  return 0;      // Return a value of 0 to the shell

} 
