#include <iostream>

int main()
{

     int i = 5;
     int *p = &i;

     if (p) { //since p has value 5 it is true 
     	std::cout << *p << std::endl;
     }

    if (*p){ // same? 
       std::cout << *p << std::endl;
    }

    return 0;

}
