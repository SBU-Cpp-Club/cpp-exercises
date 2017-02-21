//
//  Purpose:   Implement solution to exercise 2.17
//  Author:    F. D. Swesty
//  Date:      2/21/2017 
//
//  Note:  This code should print "10" and "10" to STDOUT
//
#include <iostream>
using namespace std;
int main() {

  int i, &ri = i;

  i = 5, ri = 10;

  cout << i << " " << ri << endl;

  return 0;
}
