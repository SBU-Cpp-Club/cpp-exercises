#include <iostream>
#include <vector>
#include <string>

int main() {

  // this is an empty vector (0 elements)
  std::vector<std::string> inputs;
  std::string line;

  while (getline(std::cin, line)) {
    inputs.push_back(line);
  }

  for (auto l : inputs) {
    std::cout << l << std::endl;
  }
  
  return 0;
}
