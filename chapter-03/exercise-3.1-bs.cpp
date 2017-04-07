#include<iostream>

using std::cin;
using std::cout;
using std::endl;
using std::string;

struct Sales_data{
    string bookNo;
    int units_sold = 0;
    double price = 0.0;
    double revenue = 0.0;  
};

int main()
{
  Sales_data currentItem, Item, sumItems;
  int cnt = 0;
  

  cin >> currentItem.bookNo >> currentItem.units_sold >> currentItem.price;
  currentItem.revenue = currentItem.units_sold *currentItem.price;
  cnt = 1;
  sumItems = currentItem;



  while (cin >> Item.bookNo >> Item.units_sold >> Item.price){

      Item.revenue = Item.units_sold * Item.price;  


      if (Item.bookNo == currentItem.bookNo){
          sumItems.units_sold = sumItems.units_sold + Item.units_sold;
          sumItems.revenue = sumItems.revenue + Item.revenue;

          cnt++;
      

      } else{

           cout << "The sum of " << cnt << " transactions is  "
                      << sumItems.bookNo<< " " <<sumItems.units_sold <<" "<< sumItems.revenue<< endl;

            cnt = 1;
            currentItem = Item;
            sumItems = currentItem;
      }
  
 }
  return 0;
}
