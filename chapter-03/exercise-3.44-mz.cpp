#include <iostream>

using int_array = int[4];

int main() {

  int ia[3][4] = { {0, 1, 2, 3},
		   {4, 5, 6, 7},
		   {8, 9, 10, 11}};

  // method 1 : range for
  for (const int_array &row : ia) {
    for (const int col : row) {
      std::cout << col << std::endl;
    }
  }

  std::cout << std::endl;

  for (int i=0; i < 3; i++)
    for (int j=0; j < 4; j++)
      std::cout << ia[i][j] << std::endl;

  std::cout << std::endl;

  for (int_array *p = ia; p < ia + 3; ++p) {
    for (int *q = *p; q < *p + 4; ++q) {
      std::cout << *q << std::endl;
    }
  }
  return 0;
}
