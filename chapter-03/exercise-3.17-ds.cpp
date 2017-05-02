//
//  Purpose:   Implement solution to exercise 3.17
//  Author:    F. D. Swesty
//  Date:      5/2/2017 
//
//
#include <iostream>
#include <vector>
#include <string>

using std::cin;    // Bring in ci from the standard namespace
using std::cout;   // Bring in cout from the standard namespace
using std::endl;   // Bring in endl from the standard namespace
using std::vector; // Bring in vector from the standard namespace
using std::string; // Bring in string from the standard namespace

int main() {
  string s;
  vector<string> sv;         // No elements in this vector
  while( cin >> s) {
    sv.push_back(s);           // Add value s to the vector
  }
  cout << " Vector length is " << sv.size() << endl;

                             // Output the vector to STDOUT 8 words at a time
  for(decltype(sv.size()) i=0; i < sv.size(); i++) {
    for( auto &c : sv[i]) { c = toupper(c); }
    cout << sv[i] << " ";
    if( i-8*(i/8) == 7 ) { cout << endl;}  // Every eighth word 
                                           // output an endl
  }
  cout << endl;

  return 0;   // Stop
}
