//
//  Purpose:   Implement solution to exercise 2.37
//  Author:    F. D. Swesty
//  Date:      3/28/2017 
//
//
#include <iostream>
using namespace std;
int main() {

  int a=3, b=5;

  decltype(a) c=a;   // c is of type int and is initialized to 3

  decltype( a=b ) d = a; // d is of type int& and is initialized to 3;

  cout << c << " " << d << endl;

  return 0;
}
