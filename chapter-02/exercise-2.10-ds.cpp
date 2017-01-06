//
//  Purpose:   Implement solution to exercise 2.10
//  Author:    F. D. Swesty
//  Date:      1/6/2017 

#include <iostream>

std::string global_string ; // Initializes to empty string
int global_int ;            // Initializes to zero

int main() {

  std::string local_string; // Not a built-in type so initialized by constructor
  int local_int;            // Uninitialized

  std::cout << global_string << std::endl;
  std::cout << global_int << std::endl;
  std::cout << local_string << std::endl;
  std::cout << local_int << std::endl;

  return 0;

}
