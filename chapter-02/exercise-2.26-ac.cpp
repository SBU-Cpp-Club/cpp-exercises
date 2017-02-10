//
#include<iostream>

int main()
{
   const int buf = 512;
   int cnt = 0;
   const int sz = cnt;

   std::cout << "buf = " << buf << std::endl;
   std::cout << "cnt = " << cnt << std::endl;
   std::cout << "sz = " << sz << std::endl;
   
   ++cnt;
//   ++sz;

   std::cout << "cnt = " << cnt << std::endl;
   std::cout << "sz = " << sz << std::endl;

   return 0;
}
