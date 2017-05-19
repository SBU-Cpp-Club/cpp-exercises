#include <iostream>
#include <cstddef>

int main() {

  constexpr size_t array_size = 10;

  int ia[array_size];

  // loop in text is offset by 1 -- indexing starts at 0
  for (size_t ix=0; ix < array_size; ++ix)
    ia[ix] = ix;


  for (auto i : ia) {
    std::cout << i << std::endl;
  }

  return 0;
}
