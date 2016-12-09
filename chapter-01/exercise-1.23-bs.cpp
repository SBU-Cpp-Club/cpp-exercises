/*
 *  Reads several transactions and counts
 *  the number of transactions per ISBN
 *
 */


#include <iostream>
#include "Sales_item.h"

int main()
{

    Sales_item currentItem, Item;
    int cnt = 0;

    std::cin >> currentItem;
    cnt = 1;

    while(std::cin >> Item){


        if ( Item.isbn() == currentItem.isbn() ){

            ++cnt;

        } else{

            std::cout << "The number of transactions for  " 
	              << currentItem.isbn() << " is " << cnt <<std::endl;

            cnt = 1;
	    currentItem = Item;

        }


    }

    std::cout << "The number of transactions for  " 
              << currentItem.isbn()<< " is " << cnt <<std::endl;
    return 0;

}
