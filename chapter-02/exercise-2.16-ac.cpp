//
#include<iostream>

int main()
{
   int i = 0, &r1 = i; double d = 0, &r2 = d;

   std::cout << "initially" << std::endl;
   std::cout << "i = " << i << std::endl;
   std::cout << "&r1 = " << &r1 << std::endl;
   std::cout << "&r2 = " << &r2 << std::endl;
   std::cout << "r2 = " << r2 << std::endl;
   std::cout << "d = " << d << std::endl;
   std::cout << " " << std::endl;

   r2 = 3.14159;

   std::cout << "r2 = 3.1459" << std::endl;
   std::cout << "r2 = " << r2 << std::endl;

   r2 = r1;

   std::cout << "r2 = r1" << std::endl;
   std::cout << "r2 = " << r2 << std::endl;

   i = r2;
   r1 = d;

   std::cout << "i = r2" << std::endl;
   std::cout << "r1 = d" << std::endl;
   std::cout << "i = " << i << std::endl;
   std::cout << "r1 = " << r1 << std::endl;
   std::cout << "d = " << d << std::endl;
   std::cout << "r2 = " << r2 << std::endl;
   std::cout << "r1 = " << r1 << std::endl;
   std::cout << "&r1 = " << &r1 << std::endl;
   std::cout << "&r2 = " << &r2 << std::endl;

   return 0;
}
