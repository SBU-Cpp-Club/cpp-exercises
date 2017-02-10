#include<iostream>

int main(){
// (a)
   std::cout  << 'a' << std::endl; // character literal
   std::cout  << L'a' << std::endl; // wide character  
   std::cout  << "a" << std::endl; // string literal
   std::cout  << L"a" << std::endl; //
// (b)
   std::cout  << 10 << std::endl; // decimal literal (signed by default, int as it is small?) 
   std::cout  << 10u << std::endl; // suffix makes it an unsigned integer literal
   std::cout  << 10L << std::endl; // suffix makes it a long integer literal
   std::cout  << 10uL << std::endl; // suffix makes it an unsigned long integer literal
   std::cout  << 012 << std::endl; //
// (c)
   std::cout  << 3.14 << std::endl; // floating point literal 
   std::cout  << 3.14f << std::endl; // floating point literal (same as above?)
   std::cout  << 3.14L << std::endl; // long floating point literal 
// (d)
   std::cout  << 10 << std::endl; // decimal literal (signed by default, int as it is small?) 
   std::cout  << 10u << std::endl; // suffix makes it an unsigned integer literal
   std::cout  << 10. << std::endl; // suffix makes it an unsigned integer literal
   std::cout  << 10e-2 << std::endl; // suffix makes it an unsigned integer literal

   return 0;
}
