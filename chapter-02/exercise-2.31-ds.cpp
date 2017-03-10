//
//  Purpose:   Implement solution to exercise 2.31
//  Author:    F. D. Swesty
//  Date:      3/10/2017 
//
//
#include <iostream>
using namespace std;
int main() {

  int i = 0;

  const int v2=0;   // v2 has top level const property

  int v1 = v2;      // Legal as top level const property of v2 is ignored.

  int *p1 = &v1;    // Legal as neither p1 or v1 has any const property

  int &r1 = v1;     // Legal as neither r1 or v1 has any const property

  const int *p2 = &v2 ; // v2 has top level cp., p2 has low level cp.

  const int *const p3 = &i ; // Legal as non-const can be converted to const

  const int &r2 = v2 ; // Legal as both r2 & v2 have low level const property

  r1 = v2;  // Legal.  Reference now points to v2 instead of original v1 

  //  p1 = p2; // Illgeal.  p2 has low level cp. while p1 is non-constant.

  p2 = p1;  // Legal.  Can convert non-const to low level const.

  //  p1 = p3;  // Illegal. p3 has top/low level cp and p1 is non-constant.
  
  p2 = p3;  // Legal. p3 has top/low level cp. while p2 has low level cp.

  return 0;
}
