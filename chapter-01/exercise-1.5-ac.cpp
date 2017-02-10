#include<iostream>

int main(){
   std::cout  << "Enter two integers:" << std::endl;
   int v1 = 0, v2 = 0;
   std::cin >> v1 >> v2;
   std::cout  << "the product of " << std::endl;
   std::cout  << v1 << std::endl;
   std::cout  << "and " << std::endl;
   std::cout  << v2 << std::endl;
   std::cout  << "is " << v1 * v2 << std::endl;
   return 0;
}

