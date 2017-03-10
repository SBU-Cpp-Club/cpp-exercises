//
//  Purpose:   Implement solution to exercise 2.30
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

  const int p2 = &v2 ; // v2 has top level cp., p2 has low level cp.

  const int *const p3 = &i ; // Legal as non-const can be converted to const

  const int &r2 = v2 ; // Legal as both r2 & v2 have low level const property

  

  return 0;
}
