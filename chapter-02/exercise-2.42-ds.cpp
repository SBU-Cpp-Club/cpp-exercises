//
//  Purpose:   Implement solution to exercise 2.42
//  Author:    F. D. Swesty
//  Date:      3/29/2017 
//
//
#include <iostream>
#include <string>
using namespace std;

#include "exercise-2.42-ds.h"


int main() {

  Sales_data book, sale;   // Declare instances of Sales_data
  double price;

  book.bookNumber == "";                     // Init bookNumber to empty string
  cout << " Enter book data:" ;

  while( cin >> sale.bookNumber) {

    if(sale.bookNumber == "0-0") { 
      cout << "Book Number " << book.bookNumber << " totals:" << endl;
      cout << "  units sold: " << book.unitsSold << endl;
      cout << "  revenue:  " << book.revenue << endl;
      return 0;   // Stop
    }

    cin >> sale.unitsSold;                   // Get no. units sold
    cin >> price;                            // Get price

    if(book.bookNumber == "" ) {             // This is the first sale 
                               
      book.bookNumber = sale.bookNumber;        // Set book number

    } else if(book.bookNumber != sale.bookNumber) { // This is a new book

                                                // Write out info for old book
      cout << "Book Number " << book.bookNumber << " totals:" << endl;
      cout << "  units sold: " << book.unitsSold << endl;
      cout << "  revenue:  " << book.revenue << endl;

      book.bookNumber = sale.bookNumber;        // Reset book number
      book.unitsSold = 0;                       // Reset units sold
      book.revenue = 0.0;                       // Reset revenue
    }

    book.unitsSold += sale.unitsSold;          // Add units sold to total
    book.revenue += sale.unitsSold*price;      // Add revenue to total

    cout << " Enter book data (book 0-0 ends sum):" ;
  }


  return 0;
}
