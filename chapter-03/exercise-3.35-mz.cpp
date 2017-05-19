#include <iostream>
#include <iterator>

int main() {

  constexpr int size = 10;
  int a[size];

  //auto *p = std::begin(a);

  for (auto i = 0; i < size; ++i) 
    *(a + i) = 0;

  for (auto i : a)
    std::cout << i << std::endl;

  return 0;
}
