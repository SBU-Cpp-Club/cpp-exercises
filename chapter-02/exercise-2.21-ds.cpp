//
//  Purpose:   Implement solution to exercise 2.21
//  Author:    F. D. Swesty
//  Date:      2/21/2017 
//
//
#include <iostream>
using namespace std;
int main() {

  int i=0;

  //double* dp=&i;   // This is illegal as the pointer dp has a differing type
                     // from the r-value of the address of an integer

  //int *ip=i;       // This is illegal as it is illegal to assign an integer 
                     // to a pointer even if the value is zero

  int *p = &i;       // This is a legal pointer assignment

  return 0;
}
