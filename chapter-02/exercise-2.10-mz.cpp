#include <iostream>

// class initializes to empty string
std::string global_str;

// outside of function, standard says initialized to 0
int global_int;

int main() {

  // inside function, standard says undefined
  int local_int;

  // class initializes to empty string
  std::string local_str;

  std::cout << global_str << std::endl;
  std::cout << local_str << std::endl;

  std::cout << global_int << std::endl;
  std::cout << local_int << std::endl;

  return 0;

}
