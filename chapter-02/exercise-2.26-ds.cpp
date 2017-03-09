//
//  Purpose:   Implement solution to exercise 2.27
//  Author:    F. D. Swesty
//  Date:      3/9/2017 
//
//
#include <iostream>
using namespace std;
int main() {

  int i2 = 42;

  // int i=-1, &r=0;   // Illegal.  Initializer must be object

  int *const p2 = &i2;  // Legal.
  
  const int i=-1, &r=0;  // Legal.  Initializer is prvalue.

  const int *const p3 = &i2; // Legal.  const pointer can point to non-const.

  const int *p1 = &i2;  // Legal.  Assigns address of i2 to p1

  // const int  &const r2; // Illegal.  Mismatched types.

  const int i3=i2, &r3=i2; // Legal

  return 0;
}
