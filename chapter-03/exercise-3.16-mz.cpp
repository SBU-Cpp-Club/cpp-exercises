#include <iostream>
#include <vector>
#include <string>

int main() {

  // this is an empty vector (0 elements)
  std::vector<int> v1;
  std::cout << "size of v1: " << v1.size() << std::endl;
  if (v1.size() > 0) {
    for (auto e : v1) {
      std::cout << e << std::endl;
    }
  }
  std::cout << std::endl;

  // this is a 10-element vector, with each value initialized to 0
  std::vector<int> v2(10);
  std::cout << "size of v2: " << v2.size() << std::endl;
  if (v2.size() > 0) {
    for (auto e : v2) {
      std::cout << e << std::endl;
    }
  }
  std::cout << std::endl;

  // this is a 10-element vector, with each value initialized to 42
  std::vector<int> v3(10, 42);
  std::cout << "size of v3: " << v3.size() << std::endl;
  if (v3.size() > 0) {
    for (auto e : v3) {
      std::cout << e << std::endl;
    }
  }
  std::cout << std::endl;

  // this is a 1-element vector, with the single value of 10
  std::vector<int> v4{10};
  std::cout << "size of v4: " << v4.size() << std::endl;
  if (v4.size() > 0) {
    for (auto e : v4) {
      std::cout << e << std::endl;
    }
  }
  std::cout << std::endl;

  // this is a 2-element vector, with values 10 and 42
  std::vector<int> v5{10, 42};
  std::cout << "size of v5: " << v5.size() << std::endl;
  if (v5.size() > 0) {
    for (auto e : v5) {
      std::cout << e << std::endl;
    }
  }
  std::cout << std::endl;

  // this is a 10-element vector with each string empty
  std::vector<std::string> v6{10};
  std::cout << "size of v6: " << v6.size() << std::endl;
  if (v6.size() > 0) {
    for (auto e : v6) {
      std::cout << e << std::endl;
    }
  }
  std::cout << std::endl;

  // this is a 10-element vector with each value initialized to "hi"
  std::vector<std::string> v7{10, "hi"};
  std::cout << "size of v7: " << v7.size() << std::endl;
  if (v7.size() > 0) {
    for (auto e : v7) {
      std::cout << e << std::endl;
    }
  }
  std::cout << std::endl;

  return 0;
}
