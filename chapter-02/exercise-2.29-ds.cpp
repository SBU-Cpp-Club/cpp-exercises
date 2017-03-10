//
//  Purpose:   Implement solution to exercise 2.29
//  Author:    F. D. Swesty
//  Date:      3/10/2017 
//
//
#include <iostream>
using namespace std;
int main() {

  int i=33;
  const int ic=42;
  int *p1, *const p2=&i;
  const int *const p3=&ic;
  i = ic;   // Legal.
 
  // p1 = p3; // Illegal.  Cannot have non-const pointer to a const

  //  p1 = &ic; // Illegal.   Cannot have non-const pointer to a const.

  //  p3 = &ic; // Illegal.  p3 is a const pointer and can't be changed.
  
  //  p2 = p1;  // Illegal.  p2 is a const pointer and cannot be changed.

  // ic = *p3;  // Illegal.  ic is const int and cannot be changed.

  return 0;
}
