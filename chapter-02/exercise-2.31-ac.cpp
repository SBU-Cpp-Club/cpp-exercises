//
#include<iostream>

int main()
{

   const int v2 = 0; // top-level 
   int v1 = v2;      // low-level
   
   int *p1 = &v1, &r1 = v1;  // low-level

//   const int *p2 = &v2, *const p3 = &i, &r2 = v2; 
//   const int *p2 = &v2, *const p3 = &v1, &r2 = v2;  // p2 can change, const is low-level
                                                    // p3 is constant pointer top-level const
                                                    // as seen by *const indicating a constant pointer

// above declaration same as 
   const int *p2 = &v2; 
   const int *const p3 = &v1; 
   const int &r2 = v2; 

   r1 = v2; // legal r1 not const
//   p1 = p2; // not legal p1 is not const while p2 top-level
   p2 = p1; // legal p2 is low-level const pointer- can point to a const
//   p3 = p1; // not legal p3 is top-level const pointer
//   p1 = p3; // not legal p1 is not const- can't point to a const
   p2 = p3; // legal  p2 is low-level const p3 is const pointer....


   std::cout << "v1 = " << v1 << std::endl;
   std::cout << "v2 = " << v2 << std::endl;
   std::cout << "p1 = " << p1 << std::endl;
   std::cout << "*p1 = " << *p1 << std::endl;
   std::cout << "r1 = " << r1 << std::endl;
   std::cout << "&r1 = " << &r1 << std::endl;
   std::cout << "*p2 = " << *p2 << std::endl;
   std::cout << "p2 = " << p2 << std::endl;
   std::cout << "*p3 = " << *p3 << std::endl;
   std::cout << "p3 = " << p3 << std::endl;
   std::cout << "r2 = " << r2 << std::endl;
   std::cout << "&r2 = " << &r2 << std::endl;


   return 0;
}
