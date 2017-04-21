//
//  Purpose:   Implement solution to exercise 3.5
//  Author:    F. D. Swesty
//  Date:      4/21/2017 
//
//
#include <iostream>
#include <string>

using std::cout;   // Bring in cout from the standard namespace
using std::endl;   // Bring in endl from the standard namespace
using std::string; // Bring in string from the standard namespace
using std::cin;    // Bring in cin from standard namespace


int main() {

  string s1, s2;   // Declare instances of string

  cin >> s1 >> s2;
  cout << " The concatenation of " << s1 << " and " << s2 << " is " 
      << s1+s2 << endl;

  cout << " Seperated by a space " << s1 << " and " << s2 << " are " 
      << s1+' '+s2 << endl;

  return 0;   // Stop
}
