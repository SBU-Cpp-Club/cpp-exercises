//
//  Purpose:   Implement solution to exercise 2.28
//  Author:    F. D. Swesty
//  Date:      3/10/2017 
//
//
#include <iostream>
using namespace std;
int main() {

  // int i, *const cp;    // Illegal.  A const pointer must be initialized.

  // int *p1, *const p2;   // Illegal.  A const pointer must be initialized.

  // const int ic, &r=ic; // Illegal.  A reference must be initialized.

  // const int *const p3;   // Illegal.  A const pointer must be initalized

  const int *p;  // Legal.   This is a pointer to a const int.

  return 0;
}
