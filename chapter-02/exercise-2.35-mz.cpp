#include <iostream>

int main() {

  const int i = 42;

  auto j = i; // j is an int (const dropped)
  const auto &k = i; // k is a reference to a const int (we cannot change i through k)
  auto *p = &i; // p is a pointer to a const int
  const auto j2 = i;  // j2 is a const int
  const auto &k2 = i; // k2 is a reference to a const int

  return 0;

}
