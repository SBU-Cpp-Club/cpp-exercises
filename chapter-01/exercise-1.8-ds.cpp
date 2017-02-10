//
//  Purpose:   Solution to exercise 1.8
//  Author:    D. Swesty
//  Date:      12/5/2016
//
//  Notes:     This code demonstrates how careless commenting
//             can create illegal C++ code.

#include <iostream>

int main() {

  std::cout << "/*";     // This is legal
  std::cout << "*/";     // This is legal

  std::cout << /* "*/" */;  // This is illegal as there is no 
                            // termination of the C-string

  std::cout << /* "*/" /* "/*" */;  // This is legal

  return 0;      // Return a value of 0 to the shell

} 
