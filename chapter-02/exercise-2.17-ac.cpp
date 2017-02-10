//
#include<iostream>

int main()
{
   int i, &ri = i; 
   i = 5, ri = 10;
//   i = 5; 
//
//   std::cout << "i = " << i << std::endl;
//
//   ri = 10;

   std::cout << "i = " << i << std::endl;
   std::cout << "&ri = " << &ri << std::endl;
   std::cout << "ri = " << ri << std::endl;

   return 0;
}
