//
#include<iostream>

int main()
{
   int i = 42;
   int *p1 = &i;

   std::cout << "initially" << std::endl;
   std::cout << "p1 = " << p1 << std::endl;
   std::cout << "*p1 = " << *p1 << std::endl;
   std::cout << " " << std::endl;

   *p1 = *p1 * *p1;

   std::cout << "after *p1 = *p1 * *p1; " << std::endl;
   std::cout << "p1 = " << p1 << std::endl;
   std::cout << "*p1 = " << *p1 << std::endl;
   std::cout << " " << std::endl;

   return 0;
}
