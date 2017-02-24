#include <iostream>

int main()
{

     int val = 9;
     int val2 = 11 ;
     int *p = &val;

     std::cout << val << std::endl;
 
     // change the value to which pointer points
     *p = 15;
     std::cout << val << std::endl;

     
     std::cout << *p << std::endl;
     //change the value of a pointer
     p = &val2;
     std::cout << *p << std::endl;

    return 0;

}
