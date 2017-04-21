//
//  Purpose:   Implement solution to exercise 3.7
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

  cout << " string is: " << s << endl;

  // By defining the loop control variable c to be a char, 
  // the string WILL NOT be altered.
  for( char c : s) {
    c = 'X';
    cout << " c = " << c << endl;
  }
  cout << " string is still: " << s << endl;

  return 0;   // Stop
}
