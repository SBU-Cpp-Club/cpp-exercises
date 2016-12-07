/*
 *  Prints integers between two integers
 *  given by user 
 */

#include <iostream>

int main()
{
    int lo_val = 0, hi_val = 0, n = 0;

    std::cout << "Enter first number " << std::endl;
    std::cin >> lo_val ; 
    std::cout << "Enter second number " << std::endl;
    std::cin >> hi_val ;

    //if the first number is larger than the second, then swap them
    if (lo_val > hi_val){
        n = lo_val;
	lo_val = hi_val;
	hi_val = n;
    }
        

    while (lo_val <= hi_val){
        std::cout << lo_val << std::endl;
	++lo_val;
    }

    return 0;

}
