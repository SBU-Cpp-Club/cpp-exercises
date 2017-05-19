#include <iostream>
#include <string>

// 10 elements of ""
std::string sa[10];

// 10 zeros
int ia[10]; 

int main() {

  // 10 elements of "" 
  std::string sa2[10];

  // undefined elements 
  int ia2[10];


  for (auto i : ia) {
    std::cout << i << std::endl;
  }

  return 0;

}
