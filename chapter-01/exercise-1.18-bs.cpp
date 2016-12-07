/*
 *  1.4.4 program, when ran with equal values it gives the expected 
 *  count of the value. When ran with all different values, it gives
 *  one for each value
 *
 */


#include <iostream>

int main()
{
    int currVal =0, val =0;

    if (std::cin >> currVal){
        int cnt = 1;

	while (std::cin >> val){

	    if (val == currVal)
	        ++cnt;
	    else{
	        std::cout << currVal << " occurs "
		          << cnt << " times " << std::endl;
	        currVal = val;
		cnt = 1;
	    }

	}

	std::cout << currVal << " occurs "
	          << cnt << " times " << std::endl;

    }

    return 0;
}
