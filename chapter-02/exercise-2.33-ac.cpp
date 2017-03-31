//
#include<iostream>

int main()
{

// from book:
   
   int i = 0, &r = i;
   auto a = r;   // a is an int (r is an alias for i, which has type int)

   const int ci = i, &cr = ci;  // ci is top-level const?
   auto b = ci;   // b is an int (top-level const in ci is dropped) 
   auto c = cr;   // c is an int (cr is an alias for ci whose const is top-level)
   auto d = &i;    // d is an int* (& of an int object is an int*)
   auto e = &ci;   // e is const int* (& of a const object is low-level const)

   const auto f = ci;  // deduced type of ci is int; f has type const int 
 
   auto &g = ci;       // g is a cont int& (reference) that is bound to ci
//   auto &h = 42;       // error: can't bind a plain reference to a literal
   const auto &j = 42; // ok- can bind a const reference to a litreal Why do this? Well, 
                       // as we discussed, a non-const reference to a literal can't be
                       // as you can't change it. 

   a = 42;   // a is an int. ok
   b = 42;   // b is an int. ok
   c = 42;   // c is an int. ok
//   d = 42;   // d is an int* (pointer). Shouldn't work initialized to literal
//   e = 42;   // like d, an int*. Shouldn't work.
//   g = 42;   // g is a reference to an alias to a const int. compiler says  error: assignment of read-only reference ‘g’

   std::cout << "a = " << a << std::endl;
   std::cout << "b = " << b << std::endl;
   std::cout << "c = " << c << std::endl;
//   std::cout << "d = " << d << std::endl;
//   std::cout << "e = " << e << std::endl;
//   std::cout << "g = " << g << std::endl;

   return 0;
}
