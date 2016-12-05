/*
 *  Prints integers in a range [lo, hi] 
 *  given by user
 */

#include <iostream>

int main()
{
    int lo_val = 0, hi_val = 0;

    std::cout << "Enter lower limit: " << std::endl;
    std::cin >> lo_val ;
    std::cout << "Enter upper limit: " << std::endl;
    std::cin >> hi_val ;

    while (lo_val <= hi_val){
        std::cout << lo_val << std::endl;
	++lo_val;
    }

    return 0;

}
