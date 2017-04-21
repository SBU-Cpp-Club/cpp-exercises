//
//  Purpose:   Implement solution to exercise 3.6
//  Author:    F. D. Swesty
//  Date:      4/21/2017 
//
//
#include <iostream>
#include <string>

using std::cout;   // Bring in cout from the standard namespace
using std::endl;   // Bring in endl from the standard namespace
using std::string; // Bring in string from the standard namespace


int main() {

  string s("This is a string");   // Declare & initialize instance of string

  cout << " string is " << s << endl;
  for( auto &c : s) {
    c = 'X';
  }
  cout << " string is now " << s << endl;

  return 0;   // Stop
}
