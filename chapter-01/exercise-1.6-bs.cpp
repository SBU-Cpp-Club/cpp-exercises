#include <iostream>

int main()
{
   int n1 = 0, n2 = 0; 
 
   std::cout <<  "Enter two numbers:" << std::endl;
   std::cin >> n1 >> n2;
   std::cout << "The sum of " << n1  //the semicolon
             << " and " << n2
             << " is " << n1 + n2 << std::endl;

   return 0;

}
