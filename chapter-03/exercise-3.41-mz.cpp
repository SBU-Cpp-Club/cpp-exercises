#include <iostream>
#include <vector>

int main() {

  int a[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

  std::vector<int> v1(std::begin(a), std::end(a));

  for (auto v: v1) {
    std::cout << v << std::endl;
  }

  return 0;

}
