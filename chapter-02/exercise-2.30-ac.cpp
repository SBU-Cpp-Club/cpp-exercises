//
#include<iostream>

int main()
{

   const int v2 = 0; // top-level 
   int v1 = v2;      // low-level

   std::cout << "v1 = " << v1 << std::endl;
   std::cout << "v2 = " << v2 << std::endl;
   
   int *p1 = &v1, &r1 = v1;  // low-level

   std::cout << "p1 = " << p1 << std::endl;
   std::cout << "*p1 = " << *p1 << std::endl;
   std::cout << "r1 = " << r1 << std::endl;
   std::cout << "&r1 = " << &r1 << std::endl;


//   const int *p2 = &v2, *const p3 = &i, &r2 = v2; 
   const int *p2 = &v2, *const p3 = &v1, &r2 = v2;  // top level
   std::cout << "*p2 = " << *p2 << std::endl;
   std::cout << "p2 = " << p2 << std::endl;
   std::cout << "*p3 = " << *p3 << std::endl;
   std::cout << "p3 = " << p3 << std::endl;
   std::cout << "r2 = " << r2 << std::endl;
   std::cout << "&r2 = " << &r2 << std::endl;


   return 0;
}
