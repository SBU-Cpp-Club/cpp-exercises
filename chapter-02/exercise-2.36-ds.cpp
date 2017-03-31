//
//  Purpose:   Implement solution to exercise 2.36
//  Author:    F. D. Swesty
//  Date:      3/28/2017 
//
//
#include <iostream>
using namespace std;
int main() {

  int a=3, b=5;

  decltype(a) c=a;   // c is of type int and is initialized to 3

  decltype((b)) d=a; // d is of type int& and is initialized to 4

  cout << a << " " << b << " " << c << " " << d << endl;  // a=3, b=5, c=3, d=3

  ++c;               // c now has the value 4

  cout << a << " " << b << " " << c << " " << d << endl;  // a=3, b=5, c=4, d=3

  ++d;               // d and a now have the value 4  

  cout << a << " " << b << " " << c << " " << d << endl;  // a=4, b=5, c=4, d=4


  return 0;
}
