//
#include<iostream>

int main()
{

// (a)
//   int i,  *const cp; // not legal uninitialized constant
   int i = 42,  *const cp = &i; 

   std::cout << "i = " << i << std::endl;
   std::cout << "cp = " << cp << std::endl;
   std::cout << "*cp = " << *cp << std::endl;

// (b)
//   int *p1, *const p2;   // legal constant pointer, top level const
//   int *p1, *const p2;   // legal constant pointer, top level const
   int ib = 42;
   int *p1 = &ib;  
   int *const p2 = &ib ;  

   std::cout << "*p1 = " << *p1 << std::endl;
   std::cout << "*p2 = " << *p2 << std::endl;

// (c)
   const int ic = -1, &rc = ic; // 2nd part legal- reference to a const
   std::cout << "ic = " << ic << std::endl;
   std::cout << "rc = " << rc << std::endl;
   std::cout << "&rc = " << &rc << std::endl;

// (d)
//   const int *const p3; // not legal as it is redundant?


// (e)
   int ie = 42;
   const int *pe = &ie; // legal constant pointer

   std::cout << "*pe = " << *pe << std::endl;
   std::cout << "pe = " << pe << std::endl;
   return 0;
}
