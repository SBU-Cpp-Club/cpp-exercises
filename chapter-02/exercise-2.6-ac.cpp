#include<iostream>

int main(){
   int v1 = 0, v2 = 0;
//   int month = 9, day = 7;
//   int month = 09, day = 07;  // here octal. Note 9 won't work.
//   int month = 071, day = 07;  // here octal. 7*8 = 56 56+1 = 57
   int month = 0x71, day = 0x7;  // here hexadecimal. 7*16 = 112 56+1 = 113
   std::cout  << month << std::endl; 
   std::cout  << day << std::endl;

   return 0;
}
