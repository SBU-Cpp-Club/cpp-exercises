// this should print things out character by character
// but doesn't end well

#include <iostream>

int main() {

//  const char ca[] = {'h', 'e', 'l', 'l', 'o'};
  const char ca[] = {'h', 'e', 'l', 'l', 'o', '\0'};
  const char *cp = ca;

  while (*cp) {
    std::cout << *cp << std::endl;
    ++cp;
  }

  return 0;
}
