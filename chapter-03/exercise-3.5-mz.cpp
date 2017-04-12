#include <iostream>

int main() {

  std::string s, full_string;

  while (std::cin >> s) {
    full_string += s + ' ';
  }
  
  std::cout << full_string;

  return 0;

}
