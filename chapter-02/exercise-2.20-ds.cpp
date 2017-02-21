//
//  Purpose:   Implement solution to exercise 2.20
//  Author:    F. D. Swesty
//  Date:      2/21/2017 
//
//  Note:  This code squares the integer value 2
//
#include <iostream>
using namespace std;
int main() {

  int i=2;

  int *pi=&i;

  *pi = *pi * *pi;

  cout << *pi << endl;

  return 0;
}
