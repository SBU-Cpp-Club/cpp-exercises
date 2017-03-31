//
#include<iostream>

int main()
{

   
   int a = 3, b = 4; 
   decltype(a) c = a;    // c is an int
   decltype(a=b) d = a;  // assignment yields a reference- makes d a reference
//   decltype(a=b) e;      // assignment makes d a reference illegal
   
   ++c;
   ++d;

   std::cout << "a = " << a << std::endl;
   std::cout << "b = " << b << std::endl;
   std::cout << "c = " << c << std::endl;
   std::cout << "d = " << d << std::endl;

   return 0;
}
