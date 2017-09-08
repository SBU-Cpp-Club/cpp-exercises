#include <cstring>
#include <iostream>

int main() {

  const char s1[] = "hello, world";
  const char s2[] = "hello, world";

  if (strncmp(s1, s2, strlen(s1)) != 0) {
    std::cout << "strings are not equal" << std::endl;
  }


  std::string r1 = "hello, world";
  std::string r2 = "hello, world";

  if (r1 != r2) {
    std::cout << "strings are not equal" << std::endl;
  }

  return 0;
}
