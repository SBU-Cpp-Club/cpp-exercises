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

// Note 3/25/2017 following meeting. See MZ solution and
// https://stackoverflow.com/questions/24213159/how-to-initialize-a-pointer-using-an-object-with-0-value

   return 0;
}
