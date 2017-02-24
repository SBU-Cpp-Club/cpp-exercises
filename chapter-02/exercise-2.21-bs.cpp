#include <iostream>

int main()
{

     int i = 0;

     //double  *dp = &i; illegal because they are different type
     
     // int *ip = i; illegal it is not given address of object
     int *p = &i; 
     
     std::cout << i << std::endl;
     
    return 0;

}
