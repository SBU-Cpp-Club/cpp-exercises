#include <iostream>

int main() {

  // this will be false
  //const char *cp = "";
  const char *cp = "Hello World";

  if (cp && *cp)
    std::cout << "it was true" << std::endl;

  return 0;

}
