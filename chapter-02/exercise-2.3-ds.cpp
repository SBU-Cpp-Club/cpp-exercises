//
//  Purpose:   Implement solution to exercise 2.4
//  Author:    F. D. Swesty
//  Date:      12/27/2016 
#include <iostream>
using namespace std;
int main() {

  unsigned u=10, u2=42, u3;
  int i=10, i2=42;


  cout << u2-u << endl;
  u3 = u-u2;
  cout << u3 << endl;
  cout << u3+u2 << endl;

  cout << i2-i << endl;
  cout << i-i2 << endl;

  cout << i-u << endl;
  cout << u-i << endl;


  return 0;
}
