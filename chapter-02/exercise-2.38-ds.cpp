//
//  Purpose:   Implement solution to exercise 2.38
//  Author:    F. D. Swesty
//  Date:      3/28/2017 
//
//
#include <iostream>
using namespace std;
int main() {

  // Differences between auto and decltype type deduction:

  // auto must have an initializer whereas decltype does not require one.

  // auto normally ignores top level consts, decltype does not.

  const int ci=42;   //  ci has top-level const property

  auto cj = ci;      // cj is an int and can be changed

  ++cj;

  cout << cj << endl;

  decltype(ci) ck=ci;  // ck is to type const int.  It has the top level const 
                       // property and cannot be changed.

  cout << ck << endl;


  return 0;
}
