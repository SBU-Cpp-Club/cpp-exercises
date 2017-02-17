#include <iostream>

int main()
{
   
    int i = 0, &r1 = i;
    double d = 0, &r2 = d;

    r2 = 3.14159; //valid, and assigns  3.14... to d
    
    std::cout << r2 << std::endl;
    std::cout << d << std::endl;

    r2 = r1 ; //now d value is 0, (i value) 
    std::cout << d  << std::endl;

    i = r2 ; // now i value is d value
    std::cout << i << std::endl;
    std::cout << d << std::endl;

    r1 = d;  // i value is d value 
    std::cout << i << std::endl;
    std::cout << d << std::endl;

    return 0;

}
