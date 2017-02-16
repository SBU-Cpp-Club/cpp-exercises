#include <iostream>

int i = 42;

int main()
{
    int i = 100;
    int j = i;

    //the value of j is 100
    std::cout << j  << std::endl;

    //if I wanted to use the global i value instead, use ::
    //but globals are uggly ...  
    int j2 = ::i;
    std::cout << j2 << std::endl;

    return 0;

}
