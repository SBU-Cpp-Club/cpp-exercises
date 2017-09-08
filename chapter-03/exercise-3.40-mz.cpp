#include <cstring>
#include <iostream>

int main() {

  const char s1[] = "hello, ";
  const char s2[] = "world";

  const int SMAX = 20;
  char snew[SMAX];

  // need a terminating char for str[n]cat to work
  snew[0] = '\0';

  strncat(snew, s1, SMAX);
  strncat(snew, s2, SMAX);

  std::cout << snew << std::endl;

  return 0;
}
