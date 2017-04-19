#include <vector>

int main() {

  // method 1 -- undesirable
  std::vector<int> v1;
  for (int n = 0; n < 10; ++n) {
    v1.push_back(42);
  }

  // method 2 -- best method
  std::vector<int> v2(10, 42);
  
  // method 3 -- undesirable
  std::vector<int> v3(10);
  for (auto &i : v3) {
    i = 42;
  }
  
  return 0;
}
