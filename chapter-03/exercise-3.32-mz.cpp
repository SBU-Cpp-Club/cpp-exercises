#include <iostream>
#include <cstddef>

int main() {

  constexpr size_t array_size = 10;

  int ia[array_size];
  int ia2[array_size];

  // loop in text is offset by 1 -- indexing starts at 0
  for (size_t ix=0; ix < array_size; ++ix)
    ia[ix] = ix;


  for (size_t ix = 0; ix < array_size; ++ix)
    ia2[ix] = ia[ix]; 


  for (auto i : ia2) {
    std::cout << i << std::endl;
  }

  return 0;
}
