//
#include<iostream>

int main()
{

// from 2.28
   int i = 42,  *const cp = &i; 
   int ib = 42;
   int *p1 = &ib;  
   int *const p2 = &ib ;  
   const int ic = -1, &rc = ic; // 2nd part legal- reference to a const
   const int *const p3 = p2; //
   int ie = 42;
   const int *pe = &ie; // legal constant pointer

// (a)

   i = ic;
   std::cout << "i = " << i << std::endl;

// (b)
 
//   p1 = p3;  // p1 is not const, so can't p3 is const pointer to an int. Cant have integer pointer point to const.
   std::cout << "p1 = " << p1 << std::endl;
   std::cout << "*p1 = " << *p1 << std::endl;

// (c)

//   p1 = &ic; // p1 is not pointer to const
   std::cout << "p1 = " << p1 << std::endl;
   std::cout << "*p1 = " << *p1 << std::endl;

// (d)

//   p3 = &ic; //can't re-assign const pointer.
   std::cout << "p3 = " << p3 << std::endl;
   std::cout << "*p3 = " << *p3 << std::endl;

// (e)

//   p2 = p1; // can't reassign assign const pointer.
   std::cout << "p2 = " << p2 << std::endl;
   std::cout << "*p2 = " << *p2 << std::endl;

// (f)

//   ic = *p3; // can't assign const
   std::cout << "ic = " << ic << std::endl;
   return 0;
}
