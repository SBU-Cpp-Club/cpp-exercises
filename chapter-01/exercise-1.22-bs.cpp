/*
 *  Reads several transactions for the same ISBN
 *  and writes the sum of all the transactions
 *
 */


#include <iostream>
#include "Sales_item.h"

int main()
{

    Sales_item currentItem, sumItems;

    std::cin >> sumItems; 

    while(std::cin >> currentItem){


        if ( sumItems.isbn() == currentItem.isbn() ){

            sumItems += currentItem ;

        } else{
            std::cerr << "Data must refer to same ISBN"
	              << std::endl;
            std::cout << "The sum of all previous transactions is: " << sumItems << std::endl;

            return -1;
        }


    }
    std::cout << "The sum of all transactions is: " << sumItems << std::endl;
    return 0;

}
