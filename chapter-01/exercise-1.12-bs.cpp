/*
 * For loop that sums the integers from -100 to 100
 * */

#include <iostream>

int main()
{
    int sum = 0;

    for (int i = -100; i <= 100; ++i)
        sum += i;

    std::cout <<"The final value of sum is " << sum << std::endl ; //value should be 0
} 
