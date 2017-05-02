//
//  Purpose:   Implement solution to exercise 3.20
//  Author:    F. D. Swesty
//  Date:      5/2/2017 
//
//
#include <iostream>
#include <vector>
#include <string>

using std::cin;    // Bring in cin from the standard namespace
using std::cout;   // Bring in cout from the standard namespace
using std::endl;   // Bring in endl from the standard namespace
using std::vector; // Bring in vector from the standard namespace

int main() {

  int i;           // variable used to hold input integer

  vector<int> ivec;         // No elements in this vector

  while ( cin >> i ) {
    ivec.push_back(i);       // Add next integer to vector
  }

  for(decltype(ivec.size()) j=0; j < ivec.size(); j = j+2) {
    cout << " sum of " << ivec[j] << " and " << ivec[j+1] << " is " 
         << ivec[j]+ivec[j+1] << endl;
  }
  if(ivec.size() > 2) {
    cout << " sum of " << ivec[0] << " and " << ivec[1] << " is " 
         << ivec[0]+ivec[1] << endl;
    cout << " sum of " << ivec[ivec.size()-2] << " and " 
         << ivec[ivec.size()-1] << " is "
         << ivec[ivec.size()-2]+ivec[ivec.size()-1] << endl;
  }
  

  return 0;   // Stop
}
