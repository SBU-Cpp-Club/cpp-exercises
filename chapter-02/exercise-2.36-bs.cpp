#include <iostream>

int main()
{

     int a = 3, b = 4;
     decltype(a) c = a; // c has type int and is 3
     decltype((b)) d = a; //d is reference to a

     ++c; // c is 4 now 
     ++d; // d and a are 4 now
     
     std::cout << a << std::endl;
     std::cout << b << std::endl;
     std::cout << c << std::endl;
     std::cout << d << std::endl;
   
     
    return 0;

}
