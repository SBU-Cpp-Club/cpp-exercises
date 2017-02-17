#include <iostream>

int main()
{

     int i, &ri = i;
     i = 5;
     ri = 10;

     std::cout << i << " " << ri << std::endl; 
    //it will print 10 twice

    return 0;

}
