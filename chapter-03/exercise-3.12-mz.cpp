#include <iostream>
#include <vector>
#include <string>

int main() {

  // this is a vector of vectors of ints
  std::vector<std::vector<int>> ivec;

  // this is illegal -- we cannot initialize a string vector from an int
  //vector<string> svec = ivec;

  // this is legal
  std::vector<std::string> svec(10, "null");

  return 0;
}
