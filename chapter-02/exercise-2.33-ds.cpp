//
//  Purpose:   Implement solution to exercise 2.33
//  Author:    F. D. Swesty
//  Date:      3/10/2017 
//
//
#include <iostream>
using namespace std;
int main() {

  int i=0;            // i is an int
  int &r = i;         // r is reference to i
  auto a = r;         // a is an int
  const int ci = i;   // ci is const int
  const int &cr = ci; // cr is a reference to ci
  auto b = ci;        // b is an int (top level const of ci dropped)
  auto c = cr;        // c is an int (top level const of alias to ci dropped)
  auto d = &i;        // d is an int pointer
  auto e = &ci;       // e is an const int pointer (has low level const)
  const auto f = ci;  // f has type of const int (top level const of ci dropped
                      //   but top level const prop. established by the 
                      // const qualifier
  auto &g = ci;       // g is a const int reference that is bound to ci 
                      // (low level const was kept)

  //  auto &h = 42;      // Illegal.  Cant bind reference to literal.
  const auto &j=42;   // j is a const reference to an int with value 42
  auto k = ci;        // k is int (top level const dropped)
  auto &l = i;        // l is a int refence bound to i
  auto &m = ci;       // m is an constant int reference bound to ci
  auto *p = &ci;      // p is an pointer to a constant int

  a = 42;  // an int 42 is assigned to int a
  b = 42;  // an int 42 is assigned to int b (the top level const is dropped)
  c = 42;  // an int 42 assigned to int c
  // d = 42;  // Illegal.  d is a pointer and int 42 cannot be assigned.
  // e = 42;  // Illegal.  e is a reference to a constant pointer and is not
              // an l-value
  // g = 42;  // Illegal.  g is bound to a constant int that cannot be changed

 
  cout << r << endl;

  return 0;
}
