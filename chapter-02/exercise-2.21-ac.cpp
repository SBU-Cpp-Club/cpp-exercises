//
#include<iostream>

int main()
{
   int i = 0;
//   double *dp = &i;  // illegal
//   double* dp = &i;  // illegal as complier noted, int* to double* conversion
//   int *ip = i;  // illegal int to int* conversion 
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
