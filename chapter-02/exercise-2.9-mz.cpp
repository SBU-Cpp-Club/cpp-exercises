#include <iostream>

int main() {

  // need to define input_value first
  //std::cin >> int input_value;
  int input_value;
  std::cin >> input_value;

  // list initialization with narrowing is illegal
  //int i = {3.14};
  double i = {3.14};

  // wage is not defined
  //double salary = wage = 9999.99;
  double wage;
  double salary = wage = 9999.99;

  int j = 3.14;

  return 0;
}
