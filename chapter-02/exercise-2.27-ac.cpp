//
#include<iostream>

int main()
{

// (a)
//   int i = -1, &r = 0; // 2nd part illegal- initializer must be an object (example p. 51)
                         // p. 57-58 "A pointer is an object in memory, so like any object
                         // it has an address. Later p. 58 "A reference is not an object."
   int i = -1, &r = i; 

   std::cout << "i = " << i << std::endl;
   std::cout << "r = " << r << std::endl;
   std::cout << "&r = " << &r << std::endl;
   std::cout << "&i = " << &i << std::endl;

// (b)
   int ib = 42;
   int *const pb = &ib;   // legal constant pointer, top level const

   std::cout << "ib = " << ib << std::endl;
   std::cout << "*pb = " << *pb << std::endl;
   std::cout << "pb = " << pb << std::endl;

// (c)
   const int ic = -1, &rc = 0; // 2nd part legal- reference to a const
   std::cout << "ic = " << ic << std::endl;
   std::cout << "rc = " << rc << std::endl;
   std::cout << "&rc = " << &rc << std::endl;

// (d)
   int id = 42;
   const int *const pd = &id; // legal as the value is constant

   std::cout << "*pd = " << *pd << std::endl;
   std::cout << "pd = " << pd << std::endl;

   id = 19;
   std::cout << "*pd = " << *pd << std::endl;
   std::cout << "pd = " << pd << std::endl;
   
//   pd = ib;  // won't work. 

// (e)
   int ie = 42;
   const int *pe = &ie; // legal as the value is constant (though just low-level?)

   std::cout << "*pe = " << *pe << std::endl;
   std::cout << "pe = " << pe << std::endl;

// (f)
//   const int &const r2; //  illegal- must initialize
   int iff = 7;
//   const int &const r2 = iff; //  illegal- must initialize
   int &r2 = iff; //  illegal- must initialize

   std::cout << "&r2 = " << &r2 << std::endl;
   std::cout << "r2 = " << r2 << std::endl;

// (g)
   int ig = 9;
   const int ig2 = ig, &rg = ig; // 

   std::cout << "ig = " << ig << std::endl;
   std::cout << "ig2 = " << ig2 << std::endl;
   std::cout << "&rg = " << &rg << std::endl;
   std::cout << "rg = " << rg << std::endl;
   return 0;
}
