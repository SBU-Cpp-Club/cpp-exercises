//
//  Purpose:   Implement solution to exercise 2.23
//  Author:    F. D. Swesty
//  Date:      2/21/2017 
//
//
#include <iostream>
using namespace std;
int main() {

  //  Given a pointer p, C++11 does not provide any means of checking to see
  //  if the pointer points a valid object.   An example of this would be a
  //  dangling pointer.  For example:

  int *p, *q;       // Declare pointers p & q

  p = new int(42);  // Create a new instance of int and assign it to p

  q = p;            // Assign p to q

  // q now points to a valid address.

  delete p;         // Delete the object p points to.

  // Now the address of q is unchanged but no longer valid because it points
  // to an address that has no holds a valid object.


  return 0;
}
