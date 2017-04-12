#include <iostream>

int main() {

  const std::string s = "Keep out!";

  // this is legal, but c will be a const char -- we cannot change s through c
  for (auto &c : s) {
    std::cout << c << std::endl;
  }

  return 0;
}
