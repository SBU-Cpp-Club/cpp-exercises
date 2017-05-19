#include <iostream>
#include <iterator>

int main() {

  int a[10] = {0,1,2,3,4,5,6,7,8,9};
  decltype(a) b;

  auto bb = std::begin(b);
  auto be = std::end(b);

  std::cout << be - bb << std::endl;

  return 0;

}
