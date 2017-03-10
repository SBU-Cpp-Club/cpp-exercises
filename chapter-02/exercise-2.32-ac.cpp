//
#include<iostream>

int main()
{

   
   int null = 0;      
//   int *p = null;  
   int *p = &null;  // works but misses the point?

//test
//   int null2 = 1;    
//   int *p = &null2;  

//   int *p = nullptr;  

   std::cout << "null = " << null << std::endl;
   std::cout << "p = " << p << std::endl;
   std::cout << "*p = " << *p << std::endl;


   return 0;
}
