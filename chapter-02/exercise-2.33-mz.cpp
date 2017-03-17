#include <iostream>

int main() {

  int i = 0, &r = i;

  // a is int
  auto a = r;

  const int ci = i, &cr = ci;

  // b is int
  auto b = ci;

  // c is int
  auto c = cr;

  // d is int*
  auto d = &i;

  // e is const int*
  auto e = &ci;

  // f is const int
  const auto f = ci;

  // g is const int &
  auto &g = ci;


  a = 42; // legal
  b = 42; // legal
  c = 42; // legal
  //d = 42; // illegal (d is a pointer)
  //e = 42; // illegal (e is const int *)
  //f = 42; // illegal, f is const
  //g = 42; // illegal, g is a ref

  return 0;

}
