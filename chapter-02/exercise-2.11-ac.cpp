#include<iostream>

int main(){
//   extern int ix = 1024;
   int iy;
   extern int iz;

   iy = 1023;
   iz = 1022;

//   std::cout << "ix = " << ix << std::endl;
   std::cout << "iy = " << iy << std::endl;
   std::cout << "iz = " << iz << std::endl;

   return 0;
}
