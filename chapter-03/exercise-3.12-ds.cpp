//
//  Purpose:   Implement solution to exercise 3.12
//  Author:    F. D. Swesty
//  Date:      4/28/2017 
//
//
#include <iostream>
#include <string>
#include <vector>

using std::cout;   // Bring in cout from the standard namespace
using std::endl;   // Bring in endl from the standard namespace
using std::string; // Bring in string from the standard namespace
using std::vector; // Bring in vector from the standard namespace

int main() {

  vector<vector<int>> ivec;    // Legal
  // vector<string> svec=ivec;   // Illegal: can't do int to string assignment
  vector<string> svec(10,"null"); // Legal

  return 0;   // Stop
}
