//
#include<iostream>

int main()
{

// (a)
//   int i = -1, &r = 0; // 2nd part illegal- initializer must be an object (example p. 51)
                         // p. 57-58 "A pointer is an object in memory, so like any object
                         // it has an address. Later p. 58 "A reference is not an object."

// Doug- `if you have int &r = 0, that is illegal. const int &r = 0 is legal because 
// behind the scenes, 0 is an int with const attribute. Must be illegal because
// you could use the referece to change the value of the literal. 
// note that 0 here is just a literal, not that overloaded pointer assignment stuff we talked
// about.
// 
   int i = -1, &r = i; 

   std::cout << "i = " << i << std::endl;
   std::cout << "r = " << r << std::endl;
   std::cout << "&r = " << &r << std::endl;
   std::cout << "&i = " << &i << std::endl;

// (b)
   int ib = 42;
   int *const pb = &ib;   // legal constant pointer, top level const
// pointer itself is constant.If pointing to const int, that is low-level.

   std::cout << "ib = " << ib << std::endl;
   std::cout << "*pb = " << *pb << std::endl;
   std::cout << "pb = " << pb << std::endl;

// (c)
   const int ic = -1, &rc = 0; // 2nd part legal- reference to a const
// don't like all this together. Put on separate lines in top down order.
   std::cout << "ic = " << ic << std::endl;
   std::cout << "rc = " << rc << std::endl;
   std::cout << "&rc = " << &rc << std::endl;

// (d)
   int id = 42;
   const int *const pd = &id; // legal as the value is constant
//???

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
// shold be cant modify i2 through p1

// (f)
//   const int &const r2; //  illegal- must initialize
// doubly illegal- 2nd const should not be there.
   int iff = 7;
//   const int &const r2 = iff; //  illegal- must initialize
   int &r2 = iff; //  illegal- must initialize

   std::cout << "&r2 = " << &r2 << std::endl;
   std::cout << "r2 = " << r2 << std::endl;

// (g)
   int ig = 9;
   const int ig2 = ig, &rg = ig; // 
// legal but we can't modify i though r.

   std::cout << "ig = " << ig << std::endl;
   std::cout << "ig2 = " << ig2 << std::endl;
   std::cout << "&rg = " << &rg << std::endl;
   std::cout << "rg = " << rg << std::endl;
   return 0;
}
