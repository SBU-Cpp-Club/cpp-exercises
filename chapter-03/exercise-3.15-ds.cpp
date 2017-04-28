//
//  Purpose:   Implement solution to exercise 3.15
//  Author:    F. D. Swesty
//  Date:      4/28/2017 
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
    cout << " Vector length is " << sv.size() << endl;
  }

                         // Output the vector to STDOUT
  cout << " Vector element values are: ";
  for(decltype(sv.size()) j=0; j < sv.size() ; j++) {cout << sv[j] << " ";}
  cout << endl;

  return 0;   // Stop
}
