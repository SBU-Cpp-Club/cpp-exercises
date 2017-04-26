#include <iostream>
#include <vector>

int main() {

  std::vector<int> intvec(10, 1);

  for (auto it = intvec.begin(); it != intvec.end(); ++it) {
    *it = 2* *it;
  }

  for (auto it = intvec.cbegin(); it != intvec.cend(); ++it) {
    std::cout << *it << std::endl;
  }

  return 0;
}
