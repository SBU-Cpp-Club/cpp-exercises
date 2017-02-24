#include <iostream>

int main() {

  // define an integer with value 42
  int i = 0;

  // illegal -- we are mixing types
  //double* dp = &i;

  // this is illegal -- ip is an int* but i is an int
  //int *ip = i;

  // this is making p point to i
  int *p = &i;

  return 0;

}
