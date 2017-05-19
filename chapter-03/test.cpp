#include <iostream>
#include <vector>

int main() {
  
  std::vector<int> stuff {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

  for (auto it = stuff.begin(); it != stuff.end(); it += 3) {
    std::cout << *it << std::endl;
  }

}
