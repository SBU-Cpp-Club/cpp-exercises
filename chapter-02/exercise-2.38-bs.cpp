#include <iostream>

int main()
{

     int a = 3;

     //example when auto and decltype deduce same type
     decltype(a) c = a; // c has type int and is 3
     auto  d = a; //d is int

    //example when auto and decltype deduce different type
     const int ci = 5;        
     decltype(ci) e = ci;
     auto f = ci;

     std::cout << a << std::endl;
     std::cout << c << std::endl;
     std::cout << d << std::endl;

     f = 4; //top-level const  is dropped
            // if I tried changing e or ci program wouldn't compile
     std::cout << e << std::endl;
     std::cout << f << std::endl;
     
    return 0;

}
