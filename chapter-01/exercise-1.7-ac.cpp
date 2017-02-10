#include<iostream>
/* Program execise1.7 
 * to show /* incorrectly nested */
 * comments
*/

int main(){
   std::cout  << "Enter two integers:" << std::endl;
   int v1 = 0, v2 = 0;
   std::cin >> v1 >> v2;
   std::cout  << "the product of " << v1 << " and " << v2
              << " is " << v1 * v2 << std::endl;
   return 0;
}

