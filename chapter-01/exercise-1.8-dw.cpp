#include <iostream>

int main()
{
  std::cout << "/*";
  std::cout << "*/";
  //Original:
  //std::cout << /* "*/" */;
  //Revised:
  std::cout << /* "*/" */";
  std::cout << /* "*/" /* "/*" */;
  return 0;
}
