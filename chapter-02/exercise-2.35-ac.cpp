//
#include<iostream>

int main()
{

// from book:
   
   const int i = 42; // i is a const int 

   auto j = i;         // j is an int If I understand, top-level const doesn't follow.
   const auto &k = i;  // k is a const ref to int
   auto *p = &i;       // p is a pointer to type of i- const int.
 
   const auto j2 = i, &k2 = i; // j2 is a top-level const that may be initialized to i, k2 is a ref to i.

   std::cout << "i = " << i << std::endl;
   std::cout << "j = " << j << std::endl;
   std::cout << "k = " << k << std::endl;
   std::cout << "p = " << p << std::endl;
   std::cout << "*p = " << *p << std::endl;
   std::cout << "j2 = " << j2 << std::endl;
   std::cout << "k2 = " << k2 << std::endl;

//   i = 44;  // won't work
   j = 44;  // ok
//   *p = &j;  // shouldn't work as low-level const propagates?
//   *p = j;   // shouldn't work as low-level const propagates?
//   k = 44;   // shouldn't work
//   j2 = 44;  // didn't work
//   k2 = 44;  // didn't work
   std::cout << "i = " << i << std::endl;
   std::cout << "j = " << j << std::endl;
   std::cout << "k = " << k << std::endl;
   std::cout << "p = " << p << std::endl;
   std::cout << "*p = " << *p << std::endl;
   std::cout << "j2 = " << j2 << std::endl;
   std::cout << "k2 = " << k2 << std::endl;

   return 0;
}
