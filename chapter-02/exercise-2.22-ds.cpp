//
//  Purpose:   Implement solution to exercise 2.22
//  Author:    F. D. Swesty
//  Date:      2/21/2017 
//
//
#include <iostream>
using namespace std;
int main() {

  int i=42;

  int *p=&i;

  if(p)  cout << "checks to see if p is bound" << endl;

  if(*p) cout << "Checks to see if what p points to is true" << endl;

  return 0;
}
