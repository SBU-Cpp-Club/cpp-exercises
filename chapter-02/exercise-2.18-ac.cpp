//
#include<iostream>

int main()
{
   int i = 0, j = 1, k = 2; 
   int *p1 = &i;
   int *p2 = &j;
   int *p3 = &k;

   std::cout << "initially" << std::endl;
   std::cout << "p1 = " << p1 << std::endl;
   std::cout << "*p1 = " << *p1 << std::endl;
   std::cout << "p2 = " << p2 << std::endl;
   std::cout << "*p2 = " << *p2 << std::endl;
   std::cout << "p3 = " << p3 << std::endl;
   std::cout << "*p3 = " << *p3 << std::endl;
   std::cout << " " << std::endl;

   *p3 = *p2;

   std::cout << "after *p3 = *p2" << std::endl;
   std::cout << "p3 = " << p3 << std::endl;
   std::cout << "*p3 = " << *p3 << std::endl;
   std::cout << " " << std::endl;

   p3 = p2;

   std::cout << "after p3 = p2" << std::endl;
   std::cout << "p3 = " << p3 << std::endl;
   std::cout << "*p3 = " << *p3 << std::endl;
   std::cout << " " << std::endl;

   return 0;
}
