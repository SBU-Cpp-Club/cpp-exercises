//
//  Purpose:   Implement solution to exercise 2.14
//  Author:    F. D. Swesty
//  Date:      1/6/2017 
//
//  Note:      This program will output the number 100 followed by the
//             sum of numbers 1-10 to STDOUT.   
//
#include <iostream>


int main() {

  int i=100, sum = 0;
  for(int i=0; i!= 10; ++i)
    sum +=i;

  std::cout << i << " " << sum << std::endl;

  return 0;

}
