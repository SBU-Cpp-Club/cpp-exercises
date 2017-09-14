//
//  Purpose:   Implement solution to exercise 3.23
//  Author:    F. D. Swesty
//  Date:      9/14/2017 
//
//
#include <iostream>
#include <vector>


using std::cout;    // Bring in cout from the standard namespace
using std::endl;    // Bring in endl from the standard namespace
using std::vector;  // Bring in vector from the standard namespace

int main() {

  vector<int> v;              // Vector to hold 10 integers


  for(auto i = 0; i != 10; i++) {
    v.push_back(i);
  }

  for(auto iv = v.begin(); iv !=v.end(); iv++) {
    *iv = 2*(*iv);
  }

                               // Write lines to STDOUT
  for(auto iv=v.begin(); iv != v.end(); iv++) {
    cout << *iv << endl;
  }

   
  return 0;                    // Stop
}
