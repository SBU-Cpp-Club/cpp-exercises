#include <iostream>

struct Sales_data {
  std::string bookNo;
  unsigned units_sold = 0;
  double revenue = 0.0;
};


int main() {

  Sales_data x;
  x.bookNo = "test";

  std::cout << x.bookNo << x.units_sold << x.revenue << std::endl;

  return 0;

}
