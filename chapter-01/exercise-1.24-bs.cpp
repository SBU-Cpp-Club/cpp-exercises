/*
 *  Reads several transactions and counts
 *  the number of transactions per ISBN
 *
 */


#include <iostream>
#include "Sales_item.h"

int main()
{

    Sales_item currentItem, Item, sumItems;
    int cnt = 0;

    std::cin >> currentItem;
    cnt = 1;
    sumItems = currentItem;

    while(std::cin >> Item){


        if ( Item.isbn() == currentItem.isbn() ){

            ++cnt;
	    sumItems += Item;

        } else{

            std::cout << "The sum of " << cnt << " transactions is  " 
	              << sumItems << std::endl;

            cnt = 1;
	    currentItem = Item;
	    sumItems = currentItem;

        }


    }


    std::cout << "The sum of " << cnt << " transactions is  "
              << sumItems << std::endl;
    return 0;

}
