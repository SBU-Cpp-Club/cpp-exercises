#include <iostream>
#include <vector>
#include <string>

int main() {

  // this is an empty vector (0 elements)
  std::vector<int> v1;

  // this is a 10-element vector, with each value initialized to 0
  std::vector<int> v2(10);

  // this is a 10-element vector, with each value initialized to 42
  std::vector<int> v3(10, 42);

  // this is a 1-element vector, with the single value of 10
  std::vector<int> v4{10};

  // this is a 2-element vector, with values 10 and 42
  std::vector<int> v5{10, 42};
  for (auto s : v5) {
    std::cout << s << std::endl;
  }

  // this is a 10-element vector with each string empty
  std::vector<std::string> v6{10};
  for (auto s : v6) {
    std::cout << s << std::endl;
  }

  // this is a 10-element vector with each value initialized to "hi"
  std::vector<std::string> v7{10, "hi"};
  for (auto s : v7) {
    std::cout << s << std::endl;
  }

  return 0;
}
