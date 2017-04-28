//
//  Purpose:   Implement solution to exercise 3.14
//  Author:    F. D. Swesty
//  Date:      4/28/2017 
//
//
#include <iostream>
#include <vector>

using std::cin;    // Bring in ci from the standard namespace
using std::cout;   // Bring in cout from the standard namespace
using std::endl;   // Bring in endl from the standard namespace
using std::vector; // Bring in vector from the standard namespace

int main() {
  int i;
  vector<int> iv;         // No elements in this vector
  while( cin >> i) {
    iv.push_back(i);           // Add value i to the vector
    cout << " Vector length is " << iv.size() << endl;
  }

                         // Output the vector to STDOUT
  cout << " Vector element values are: ";
  for(decltype(iv.size()) j=0; j < iv.size() ; j++) {cout << iv[j] << " ";}
  cout << endl;

  return 0;   // Stop
}
