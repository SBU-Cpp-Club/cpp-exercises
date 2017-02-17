#include<iostream>

int main(){
//   extern int ix = 1024;
   int iy;
   extern int iz;
//   extern int iz = 1022;

   iy = 1023;
   iz = 1022;

//   std::cout << "ix = " << ix << std::endl;
   std::cout << "iy = " << iy << std::endl;
   std::cout << "iz = " << iz << std::endl;

   return 0;
}
// upshot- if you declare a variable extern in a function, you
// have to get the value from somewhere external. You can't define it
//   extern int ix = 1024;
//   and you can't assign it and 
//   extern int iz;
//   iz = 1022;
