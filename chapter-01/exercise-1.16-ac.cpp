#include<iostream>

int main(){
   int sum = 0, value = 0;
   std::cout  << "Enter integers to sum" << std::endl;
   while (std::cin >>  value) 
        sum += value; 
       std::cout  << "Sum of the numbers is " << sum << std::endl;
   return 0;
}

