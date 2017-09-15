#include <iostream>
#include <array>

int main() {

  int ia[3][4] = { {0, 1, 2, 3},
		   {4, 5, 6, 7},
		   {8, 9, 10, 11}};

  // method 1 : range for
  for (auto &row : ia) {
    for (auto col : row) {
      std::cout << col << std::endl;
    }
  }

  std::cout << std::endl;

  for (int i=0; i < 3; i++)
    for (int j=0; j < 4; j++)
      std::cout << ia[i][j] << std::endl;

  std::cout << std::endl;

  for (auto p = std::begin(ia); p < std::end(ia); ++p) {
    for (auto q = std::begin(*p); q < std::end(*p); ++q) {
      std::cout << *q << std::endl;
    }
  }
  return 0;
}
