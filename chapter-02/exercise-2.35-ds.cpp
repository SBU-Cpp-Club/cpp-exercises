//
//  Purpose:   Implement solution to exercise 2.35
//  Author:    F. D. Swesty
//  Date:      3/10/2017 
//
//
#include <iostream>
using namespace std;
int main() {

  const int i=42;     // i is an int w/ value 42
  auto j = i;         // j is an int with value 42
  cout << " j = " << j << endl;
  j = 43;
  cout << " j = " << j << endl;

  const auto &k=i;    // k is a constant reference to i
  cout << " k = " << k << endl;
  // k = 33;   // This statement would cause an error since k is a const int

  auto *p = &i;      // p is an int pointer pointing to i
  cout << " *p = " << *p << endl;

  const auto j2 = i; // j2 is a constant int w/ value 42
  cout << " j2 = " << j2 << endl;

  const auto &k2 = i; // k2 is a const reference to i
  cout << " k2 = " << k2 << endl;

  return 0;
}
