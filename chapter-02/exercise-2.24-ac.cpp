//
#include<iostream>

int main()
{
   int i = 42;
   long j = 42;
   void *p = &i; 
//   long *lp = &i; 
   long *lp2 = &j; 

   std::cout << "i = " << i << std::endl;
   std::cout << "j = " << j << std::endl;
   std::cout << "p = " << p << std::endl;
//   std::cout << "*p = " << *p << std::endl;
//   std::cout << "lp = " << lp << std::endl;
//   std::cout << "*lp = " << *lp << std::endl;
   std::cout << "lp2 = " << lp2 << std::endl;
   std::cout << "*lp2 = " << *lp2 << std::endl;
   std::cout << " " << std::endl;

   return 0;
}
