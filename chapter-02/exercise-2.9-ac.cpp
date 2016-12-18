#include<iostream>

int main(){
// (a)
//   std::cin  << int input_value;
   int input_value;
   std::cin  >> input_value;
   std::cout  << "input_value = " << input_value << std::endl;
// (b)
//   int i = { 3.14 };
   int i = { 3 };
   std::cout << "i = " << i << std::endl;
// (c)
//   double salary = wage = 999.99
   double salary = 999.99;
   double wage = salary;
   std::cout << "salary = " << salary << " wage = " << wage << std::endl;
// (d)
   int j = 3.14;
   float jfixed = 3.14;
   std::cout << "j = " << j << std::endl;
   std::cout << "jfixed = " << jfixed << std::endl;

   return 0;
}
