//
// references. Note that the new standard includes an "rvalue reference."
//             The references we are dealing with are called an 
//             "lvalue reference." See p. 50.
//
//     Question- The book says a reference is an alias. Is it an address?
//
//     Answer- As per discussion, it is an alias. Mike says that he only uses
//            these in arguments to functions. So what is the point of an 
//            alias? Not much, but you use these reference variables in
//            aregument lists so that you can change the value in the function.
//            By making a reference variable, you are passing by reference and 
//            doing what Fortran does by default.
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
