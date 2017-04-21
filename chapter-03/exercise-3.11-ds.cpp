//
//  Purpose:   Implement solution to exercise 3.10
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

  const string s("Keep out!");    // Declare instance of string

  //   The following is legal because c is a reference to a const 
  //   reference to a char.  If we try to alter c the program would be
  //   illegal and will not compile.
  for( auto &c : s) {
    cout << c << endl;
  }

  return 0;   // Stop
}
