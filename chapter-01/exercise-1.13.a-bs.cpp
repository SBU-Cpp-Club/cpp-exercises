/*
 * For loop that sums from 50 to 100
 * */

#include <iostream>

int main()
{
    int sum = 0;

    for (int i = 50; i <= 100; ++i)
        sum += i;

    std::cout <<"The final value of sum is " << sum << std::endl ; //value should be 0
} 
