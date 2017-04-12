#include <iostream>

int main() {

  std::string s;
  
  std::cin >> s;

  for (auto &c : s) {
    c = 'X';
  }

  std::cout << s << std::endl;

  return 0;
}
