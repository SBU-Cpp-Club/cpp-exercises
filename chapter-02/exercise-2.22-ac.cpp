//
#include<iostream>

int main()
{
   int i = 0;
//   int i = 1;
   int *p = &i; 

   std::cout << "initially" << std::endl;
   std::cout << "i = " << i << std::endl;
   std::cout << "p = " << p << std::endl;
   std::cout << "*p = " << *p << std::endl;
   std::cout << " " << std::endl;

   if (p) {
      std::cout << "(p) true" << std::endl;
   }

   if (*p) { 
          std::cout << "(*p) true" << std::endl;
   }

   return 0;
}
