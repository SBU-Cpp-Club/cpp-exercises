//
//  Purpose:   Implement solution to exercise 2.19
//  Author:    F. D. Swesty
//  Date:      2/21/2017 
//
//  Note:  This code explains the differences between references and pointers
//
#include <iostream>
using namespace std;
int main() {

  // A reference is an alias that can be applied to certrain types of 
  // existing objects.   It does not create a new object.   It is "constant"
  // in the sense that it may only point to one object and cannot change at
  // execution time.  A reference *must* be initialized at compile time.

  // A pointer may contain the address of an object.   It must be declared 
  // but the value can change at run time.   It may be declared without being
  // initialized (but it is bad practice to do so).

  return 0;
}
