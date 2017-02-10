//
// Book notes that "We may dereference only a valid pointer that points to 
// an object."
//
// Let's test that.
//
#include<iostream>

int main()
{
   int i = 0;
   int j = 1;
   int *p1 = &i; 
   int *p2 = &j; 
   int *p3 = nullptr; 
   int *p4; 

   std::cout << "p1 = " << p1 << std::endl;
   std::cout << "*p1 = " << *p1 << std::endl;
   std::cout << "p2 = " << p2 << std::endl;
   std::cout << "*p2 = " << *p2 << std::endl;
   std::cout << "p3 = " << p3 << std::endl;
   std::cout << "*p3 = " << *p3 << std::endl;
   std::cout << "p4 = " << p4 << std::endl;
   std::cout << "*p4 = " << *p4 << std::endl;
   std::cout << " " << std::endl;

   return 0;
}
