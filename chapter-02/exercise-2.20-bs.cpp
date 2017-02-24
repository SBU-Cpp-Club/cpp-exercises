#include <iostream>

int main()
{

     int i = 42;
     int *p1 = &i;

     
     *p1 = *p1 * *p1; //will change the value of i to 42^2
     std::cout << i << std::endl;
     
    return 0;

}
