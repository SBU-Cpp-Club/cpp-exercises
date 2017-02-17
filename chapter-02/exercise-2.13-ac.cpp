#include<iostream>

int i = 42;

int main()
{
    int i = 100;
    int j = i;

   std::cout << "i = " << i << std::endl;
   std::cout << "i = " << ::i << std::endl;
   std::cout << "j = " << j << std::endl;

   return 0;
}
