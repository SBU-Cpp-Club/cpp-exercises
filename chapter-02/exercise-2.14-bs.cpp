#include <iostream>


int main()
{
    int i = 100, sum = 0;

    for (int i = 0; i != 10; ++i)  //scope of i from 0 to 9 is just in loop
        sum += i;

    std::cout << i << " " << sum << std::endl;  //i here is 100 
    // and sum is sum of 0 to 9 (9*5=45)

    return 0;

}
