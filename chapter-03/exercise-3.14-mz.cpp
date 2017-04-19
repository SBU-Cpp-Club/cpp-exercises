#include <iostream>
#include <vector>
#include <string>

int main() {

  // this is an empty vector (0 elements)
  std::vector<int> inputs;
  int i;

  while (std::cin >> i) {
    inputs.push_back(i);
  }

  for (auto e : inputs) {
    std::cout << e << std::endl;
  }
  
  return 0;
}
