#include <iostream>

int main()
{
   int n1 = 0, n2 = 0; 
 
   std::cout <<  "Enter two numbers:" << std::endl;
   std::cin >> n1 >> n2;
   std::cout << "The product of " << n1 << " and " << n2
             << " is " << n1 * n2 << std::endl;

   return 0;

}
