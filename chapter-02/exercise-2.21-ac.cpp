//
#include<iostream>

int main()
{
   int i = 0;
// note that 0 is special! Assingment operator overloaded
// so that if you see 0 you assign null pointer.
//   double *dp = &i;  // illegal
//   double* dp = &i;  // illegal as complier noted, int* to double* conversion
//   int *ip = i;  // illegal int to int* conversion 
// see above about 0
//   int *p = &i;  // legal
   int* p = &i;  // legal

//   std::cout << "initially" << std::endl;
//   std::cout << "i = " << i << std::endl;
//   std::cout << "dp = " << dp << std::endl;
//   std::cout << "*dp = " << *dp << std::endl;
//   std::cout << " " << std::endl;

//   std::cout << "initially" << std::endl;
//   std::cout << "i = " << i << std::endl;
//   std::cout << "ip = " << ip << std::endl;
//   std::cout << "*ip = " << *ip << std::endl;
//   std::cout << " " << std::endl;

   std::cout << "initially" << std::endl;
   std::cout << "i = " << i << std::endl;
   std::cout << "p = " << p << std::endl;
   std::cout << "*p = " << *p << std::endl;
   std::cout << " " << std::endl;

   return 0;
}
