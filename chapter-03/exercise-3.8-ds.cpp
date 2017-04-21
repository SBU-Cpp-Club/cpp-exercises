//
//  Purpose:   Implement solution to exercise 3.8
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

  string s1("This is a string");   // Declare & initialize instance of string
  string s2("This is a string");   // Declare & initialize instance of string
  string s3("This is a string");   // Declare & initialize instance of string

  //   Method 1: using a range for loop
  cout << " string is: " << s1 << endl;
  for( auto &c : s1) {
    c = 'X';
    cout << " c = " << c << endl;
  }
  cout << " string is now: " << s1 << endl;

  //   Method 2: using a traditional for loop
  cout << " string is: " << s2 << endl;
  for( decltype(s2.size()) i=0; i < s2.size(); i++) {
    s2[i] = 'X';
  }
  cout << " string is now: " << s2 << endl;

  //   Method 3: using a while loop
  cout << " string is: " << s3 << endl;
  decltype(s3.size()) j=0;
  while( j < s3.size() ) {
    s3[j] = 'X';
    j++;
  }
  cout << " string is now: " << s3 << endl;

  return 0;   // Stop
}
