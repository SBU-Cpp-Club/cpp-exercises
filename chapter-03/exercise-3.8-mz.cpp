#include <iostream>

int main() {

  std::string s, s2;
  
  std::cin >> s;

  s2 = s;

  for (decltype(s.size()) n = 0; n < s.size(); ++n) {
    s[n] = 'X';
  }

  std::cout << s << std::endl;

  decltype(s2.size()) n = 0;
  while (n < s2.size()) {
    s2[n] = 'Y';
    n++;
  }

  std::cout << s2 << std::endl;

  return 0;
}
