#include <iostream>

int main()
{

     int i = 5;
     int *p = &i;

     if (p) { //since p has not 0 value 
     	std::cout << *p << std::endl;
     }

    if (*p){ // has value of 5
       std::cout << *p << std::endl;
    }

    return 0;

}
