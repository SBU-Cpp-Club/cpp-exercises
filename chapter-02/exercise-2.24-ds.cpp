//
//  Purpose:   Implement solution to exercise 2.24
//  Author:    F. D. Swesty
//  Date:      2/21/2017 
//
//
#include <iostream>
using namespace std;
int main() {

  int i= 42;

  void *p = &i;   // Legal because void pointers can match any type

  // long *lp = &i;  // Illegal because type long does not match type int

  return 0;
}
