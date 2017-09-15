#include <iostream>

int main() {

  int ia[3][4] = {{0}, {4}, {8}};

  int i, j;

  for (i=0; i<3; i++) {
    for (j=0; j<4; j++) {
      std::cout << ia[i][j] << " ";
    }
    std::cout << std::endl;
  }

  std::cout << std::endl;

  int ix[3][4] = {0, 3, 6, 9};

  for (i=0; i<3; i++) {
    for (j=0; j<4; j++) {
      std::cout << ix[i][j] << " ";
    }
    std::cout << std::endl;
  }

  std::cout << std::endl;

  int (&row)[4] = ia[1];

  for (j=0; j<4; j++) {
    std::cout << row[j] << " ";
  }

  std::cout << std::endl;
  std::cout << std::endl;

  row[2] = -1;

  for (j=0; j<4; j++) {
    std::cout << row[j] << " ";
  }

  std::cout << std::endl;
  std::cout << std::endl;


  // using new standard range-for
  for (const auto &row : ia) {
    for (auto col : row)
      std::cout << col << " ";
    std::cout << std::endl;
  }

  std::cout << std::endl;
  std::cout << std::endl;

  // reset the array
  int cnt = 0;
  for (auto &row : ia)
    for (auto &col : row)
      col = cnt++;

  for (const auto &row : ia) {
    for (auto col : row)
      std::cout << col << " ";
    std::cout << std::endl;
  }

  // p. 129
  int (*p)[4] = ia;
  std::cout << std::endl;
  // print out the elements of the first row -- not deref then index
  std::cout << (*p)[0] << " " << (*p)[1] << " " << (*p)[2] << " " << (*p)[3] << std::endl;

  return 0;



}
