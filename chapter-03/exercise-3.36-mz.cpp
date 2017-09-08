#include <iostream>
#include <vector>

int main() {

  int a1[] = {0, 1, 2, 3, 4, 5};
  int a2[] = {0, 1, 2, 3, 4, 5};

  std::vector<int> v1 = {0, 1, 2, 3, 4, 5};
  std::vector<int> v2 = {0, 1, 2, 3, 4, 6};

  // check equality
  int *p1 = std::begin(a1);
  int *p2 = std::begin(a2);

  for (int i=0; i < std::end(a1) - std::begin(a1); i++) {
    if (*p1 != *p2) {
      std::cout << "arrays don't match" << std::endl;
    }
    p1++;
    p2++;
  }

  auto q1 = v1.begin();
  auto q2 = v2.begin();

  while (q1 != v1.end() || q2 != v2.end()) {
    // kinda assuming same length here
    if (*q1 != *q2) {
      std::cout << "vector elements don't match" << std::endl;
    }
    q1++;
    q2++;
  }


  // easier way
  if (v1 != v2) {
    std::cout << "vectors don't match" << std::endl;
  }

  return 0;
}
