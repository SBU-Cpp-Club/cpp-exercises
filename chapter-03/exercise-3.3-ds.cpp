//
//  Purpose:   Implement solution to exercise 3.3
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

  string line, word;   // Declare instances of string to hold a line & a word

  // In the getline() function whitespace characters are treated as any other 
  // character are are otherwise ignored.  Thus an entire line is read in at 
  // one time.
  while( getline(cin,line) ) {

    cout << line << endl;    // Output the line to STDOUT

    if( line == "" ) break;

  }

  // In contrast, using the extraction operator a whitespace is treated as 
  // a delimiter that seperates the beginning and end of a string.
  while( cin >> word ) {
    cout << word << endl;          // Output word to STDOUT
  }
  return 0;   // Stop
}
