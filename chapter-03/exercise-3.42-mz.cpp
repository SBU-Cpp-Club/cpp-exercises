#include <iostream>
#include <vector>

int main() {

  std::vector<int> v = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

  int a[10];

  for (int i=0; i < v.end() - v.begin(); i++) {
    *(a + i) = v[i];
  }

  for (int i=0; i < std::end(a) - std::begin(a); i++) {
    std::cout << a[i] << std::endl;
  }

  return 0;

}
