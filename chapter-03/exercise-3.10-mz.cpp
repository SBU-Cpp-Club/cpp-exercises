#include <iostream>
#include <cctype>

int main() {

  std::string line;

  getline(std::cin, line);

  for (auto c : line) {
    if (!ispunct(c)) {
      std::cout << c;
    }
  }
  std::cout << std::endl;

  return 0;
}
