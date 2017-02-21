//
//  Purpose:   Implement solution to exercise 2.18
//  Author:    F. D. Swesty
//  Date:      2/21/2017 
//
//  Note:  This code demonstrates the difference between changing the 
//         value of a pointer and changing the value of an object that
//         is pointed to by a point.
//
#include <iostream>
using namespace std;
int main() {

  int i = 1, j = 2;
  
  int *ptr = &i;  // Define pointer and initialize to address of i

  ptr = &j;       // Change value of ptr to address of j

  *ptr = i;       // Change value of j to 1

  return 0;
}
