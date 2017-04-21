//
//  Purpose:   Implement solution to exercise 3.4
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
  if( s1 == s2 ) {
    cout << s1 << " and " << s2 << " both have length " << s1.size() << endl;
  } else if( s1.size() == s2.size() ) {
    cout << s1 << " and " << s2 << " both have length " << s1.size() << endl;
  } else if( s1.size() > s2.size() ) {
    cout << s1 << " is longer and has length " << s1.size() << endl;
  } else if( s1.size() < s2.size() ) {
    cout << s2 << " is longer and has length " << s2.size() << endl;
  }

  return 0;   // Stop
}
