#include <iostream>
#include <string>

int main() {

  std::string s1, s2;

  std::cout << "Enter 2 words: " << std::endl;
  std::cin >> s1 >> s2;
  
  if (s1 == s2) {
    std::cout << "strings are equal" << std::endl;
  } else {
    auto len1 = s1.size();
    auto len2 = s2.size();

    if (len1 > len2) {
      std::cout << "string 1 is longer" << std::endl;
    } else if (len1 < len2) {
      std::cout << "string 2 is longer" << std::endl;
    } else {
      std::cout << "strings are the same length" << std::endl;
    }
  }

  return 0;

}
