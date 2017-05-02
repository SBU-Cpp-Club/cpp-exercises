//
//  Purpose:   Implement solution to exercise 3.18
//  Author:    F. D. Swesty
//  Date:      5/2/2017 
//
//
#include <iostream>
#include <vector>
#include <string>

using std::cout;   // Bring in cout from the standard namespace
using std::endl;   // Bring in endl from the standard namespace
using std::vector; // Bring in vector from the standard namespace

int main() {

  vector<int> ivec;         // No elements in this vector

  // ivec[0] = 42;            // This is illegal as there are no elements
                              // in ivec at this point

  ivec.push_back(42);       // This is legal as it adds a new element to 
                            // ivec and sets it's value to 42

  return 0;   // Stop
}
