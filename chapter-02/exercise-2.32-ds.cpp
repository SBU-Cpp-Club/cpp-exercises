//
//  Purpose:   Implement solution to exercise 2.32
//  Author:    F. D. Swesty
//  Date:      3/10/2017 
//
//
#include <iostream>
using namespace std;
int main() {

  //  int null = 0, *p=null;  // Illegal.  cannot assign int to pointer.

  int null = 0, *p = &null;  // Legal.   Can assign address of variable null
                             //          to the pointer p.  *p has value of 0

  // int *p = nullptr;     // Preferred alternative to create nullified pointer

  return 0;
}
