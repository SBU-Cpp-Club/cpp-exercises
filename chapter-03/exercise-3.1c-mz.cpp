#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

struct Sales_data {
  string bookNo;
  unsigned units_sold = 0;
  double revenue = 0.0;
};


int main() {

  // read in a data file of ISBNs, units, revenue, assume that the
  // data is ordered by ISBN.  At the end of the current ISBN, output
  // the total and average price

  Sales_data current;
  Sales_data series;

  while (cin >> current.bookNo) {
    
    cin >> current.units_sold;
    cin >> current.revenue;

    if (series.bookNo != "" and current.bookNo != series.bookNo) {
      // we are reading in a new book, so print out the old info
      cout << "ISBN: " << series.bookNo << endl;
      cout << "    number: " << series.units_sold << endl;
      cout << "    average price: " << series.revenue/series.units_sold << endl;
      cout << endl;

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
  cout << "ISBN: " << series.bookNo << endl;
  cout << "    number: " << series.units_sold << endl;
  cout << "    average price: " << series.revenue/series.units_sold << endl;
  cout << endl;

  return 0;
}
