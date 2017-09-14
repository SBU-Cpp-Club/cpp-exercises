//
//  Purpose:   Implement solution to exercise 3.24
//  Author:    F. D. Swesty
//  Date:      9/14/2017 
//
//
#include <iostream>
#include <vector>
#include <string>

using std::cin;    // Bring in cin from the standard namespace
using std::cout;   // Bring in cout from the standard namespace
using std::endl;   // Bring in endl from the standard namespace
using std::vector; // Bring in vector from the standard namespace

int main() {

  int i;           // variable used to hold input integer

  vector<int> ivec;         // No elements in this vector

  while ( cin >> i ) {
    ivec.push_back(i);       // Add next integer to vector
  }

  for(auto j=ivec.begin(); j != ivec.end(); j = j+2) {
    cout << " sum of " << *j << " and " << *(j+1) << " is " 
         << (*j)+ (*(j+1)) << endl;
  }

  if(ivec.begin() != ivec.end()) {
    cout << " sum of " << *(ivec.begin()) << " and " << *(ivec.end()-1) 
         << " is " << *(ivec.begin())+*(ivec.end()-1) << endl;
  }
  

  return 0;   // Stop
}
