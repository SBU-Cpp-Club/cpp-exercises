/*
 * Print numbers from 10 down to 0 using while and --
 * */

#include <iostream>

int main()
{
    int val = 10;

    while (val >= 0){
        std::cout << val << std::endl ;
	--val;

    }

    return 0;

}
