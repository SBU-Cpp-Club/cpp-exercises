//
//  Purpose:   Implement solution to exercise 3.10
//  Author:    F. D. Swesty
//  Date:      4/21/2017 
//
//
#include <iostream>
#include <string>

using std::cin;    // Bring in cin from the standard namespace
using std::cout;   // Bring in cout from the standard namespace
using std::endl;   // Bring in endl from the standard namespace
using std::string; // Bring in string from the standard namespace


int main() {

  string sin;    // Declare instance of string for input
  string sout;   // Declare instance of string for output
  getline(cin,sin) ;  // Read in a string of characters

  for( auto c : sin) {
    if(!ispunct(c)) sout += c; 
  }

  cout << sout << endl;  // Output a string without punctuation

  return 0;   // Stop
}
