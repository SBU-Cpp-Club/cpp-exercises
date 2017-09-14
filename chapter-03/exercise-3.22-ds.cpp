//
//  Purpose:   Implement solution to exercise 3.22
//  Author:    F. D. Swesty
//  Date:      9/14/2017 
//
//
#include <iostream>
#include <string>
#include <vector>
#include <cctype>


using std::cin;     // Bring in cout from the standard namespace
using std::cout;    // Bring in cout from the standard namespace
using std::endl;    // Bring in endl from the standard namespace
using std::string;  // Bring in string from the standard namespace
using std::vector;  // Bring in vector from the standard namespace
using std::toupper; // Bring in toupper from standard namespace

int main() {

  vector<string> text;    // Buffer to hold text
  string line;            // Buffer to hold line


                               // Read in lines of text
  while(getline(cin ,line)){
      text.push_back(line);
  }


                               // Convert lines tp upper character by character
  for(auto i=text.begin(); i != text.end() && !i->empty(); ++i) {
    for(auto j=i->begin(); j != i->end(); j++) {
      *j = toupper(*j);
    }
  }

                               // Write lines to STDOUT
  for(auto i=text.begin(); i != text.end() && !i->empty(); ++i) {
    cout << *i << endl;
  }

   
  return 0;   // Stop
}
