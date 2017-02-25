//
#include<iostream>

int main()
{
   const int buf = 512; // legal buf is a constant int
   int cnt = 0;         // legal cnt is an int = 0
   const int sz = cnt;  // legal sz is a const int with value cnt (0)

   std::cout << "buf = " << buf << std::endl;
   std::cout << "cnt = " << cnt << std::endl;
   std::cout << "sz = " << sz << std::endl;
   
   ++cnt;
//   ++sz;                      // not legal as sz is a const

   std::cout << "cnt = " << cnt << std::endl;
   std::cout << "sz = " << sz << std::endl;

   return 0;
}
