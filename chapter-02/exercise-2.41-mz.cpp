#include <iostream>
#include <string>

struct Sales_data {
  std::string bookNo;
  unsigned units_sold = 0;
  double revenue = 0.0;
};


int main() {

  // read in a data file of ISBNs, units, revenue, assume that the
  // data is ordered by ISBN.  At the end of the current ISBN, output
  // the total and average price

  Sales_data current;
  Sales_data series;

  while (std::cin >> current.bookNo) {
    
    std::cin >> current.units_sold;
    std::cin >> current.revenue;

    if (series.bookNo != "" and current.bookNo != series.bookNo) {
      // we are reading in a new book, so print out the old info
      std::cout << "ISBN: " << series.bookNo << std::endl;
      std::cout << "    number: " << series.units_sold << std::endl;
      std::cout << "    average price: " << series.revenue/series.units_sold << std::endl;
      std::cout << std::endl;

      series.bookNo = current.bookNo;
      series.units_sold = current.units_sold;
      series.revenue = current.revenue;

    } else {
      // this is the same ISBN as the current series, so add to that total
      series.bookNo = current.bookNo;
      series.units_sold += current.units_sold;
      series.revenue += current.revenue;
    }

  }

  // out of books, output the last info
  std::cout << "ISBN: " << series.bookNo << std::endl;
  std::cout << "    number: " << series.units_sold << std::endl;
  std::cout << "    average price: " << series.revenue/series.units_sold << std::endl;
  std::cout << std::endl;

  return 0;
}
