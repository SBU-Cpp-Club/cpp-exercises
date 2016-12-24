//
// references. Note that the new standard includes an "rvalue reference."
//             The references we are dealing with are called an 
//             "lvalue reference." See p. 50.
//
//     Question- The book says a reference is an alias. Is it an address?
//
#include<iostream>

int main()
{
   int ival = 1.01;
//   int &rval = 1.01;
   int &rval2 = ival;
//   int &rval3;
//    int &rval3 = &rval2   //can't do this.

   std::cout << "ival = " << ival << std::endl;
//   std::cout << "&rval = " << &rval << std::endl;
   std::cout << "&rval2 = " << &rval2 << std::endl;
//   std::cout << "&rval3 = " << &rval3 << std::endl;

   return 0;
}
