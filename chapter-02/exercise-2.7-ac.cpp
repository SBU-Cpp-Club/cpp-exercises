#include<iostream>

int main(){
// (a)
   std::cout  << "Who goes with F\145rgus?\012" << std::endl; 
// (b)
   std::cout  << 3.14e1L << std::endl; // long floating point 
// (c)
// why does this not work?   std::cout  << 1024f << std::endl; // floating point literal 
// (d)
   std::cout  << 3.14L << std::endl; // long floating point 

   return 0;
}
