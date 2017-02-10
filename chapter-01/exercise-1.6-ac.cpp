#include<iostream>

int main(){
   std::cout  << "Enter two integers:" << std::endl;
   int v1 = 0, v2 = 0;
   std::cin >> v1 >> v2;
   std::cout  << "the sum of " << v1 
              << " and " << v2;
              << " is " << v1 + v2 << std::endl;
//fix   std::cout  << " is " << v1 + v2 << std::endl;
   return 0;
}

