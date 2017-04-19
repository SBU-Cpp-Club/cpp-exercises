#include <vector>

int main() {

  // illegal -- vector is empty, so indexing is invalid
  //vector<int> ivec;
  std::vector<int> ivec(1);
  ivec[0] = 42;

  return 0;
}
