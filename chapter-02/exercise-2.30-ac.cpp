//
#include<iostream>

int main()
{

// low-level points to a const
// top-level pointer itself is const
   const int v2 = 0; // top-level  object itself you can't change.
   int v1 = v2;      // not const. You can assigne v1 to something else. (Check this sometime!)

   std::cout << "v1 = " << v1 << std::endl;
   std::cout << "v2 = " << v2 << std::endl;
   
   int *p1 = &v1, &r1 = v1;  // &r1 has top level const because it is a reference

   std::cout << "p1 = " << p1 << std::endl;
   std::cout << "*p1 = " << *p1 << std::endl;
   std::cout << "r1 = " << r1 << std::endl;
   std::cout << "&r1 = " << &r1 << std::endl;


//   const int *p2 = &v2, *const p3 = &i, &r2 = v2; 
   const int *p2 = &v2, *const p3 = &v1, &r2 = v2;  // first const low-level, second top-level and low-level (const pointer
// pointing to a constant) third is both as well. top level as r2 is ref, low-level becase ref to const.
// p2 of type const int, p3 always points to p2
   std::cout << "*p2 = " << *p2 << std::endl;
   std::cout << "p2 = " << p2 << std::endl;
   std::cout << "*p3 = " << *p3 << std::endl;
   std::cout << "p3 = " << p3 << std::endl;
   std::cout << "r2 = " << r2 << std::endl;
   std::cout << "&r2 = " << &r2 << std::endl;


   return 0;
}
