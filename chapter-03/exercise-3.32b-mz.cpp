#include <iostream>
#include <cstddef>
#include <vector>

int main() {

  constexpr size_t array_size = 10;

  std::vector<int> ia;
  std::vector<int> ia2;

  for (decltype(ia.size()) ix=0; ix < array_size; ++ix)
    ia.push_back(ix);

  ia2 = ia;

  for (auto i : ia2) {
    std::cout << i << std::endl;
  }

  return 0;
}
