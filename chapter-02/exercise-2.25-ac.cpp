//
#include<iostream>

int main()
{
   int* ip, i, &r = i;
// *ip is a pointer to an int
//  i is an integer 
//  r is a reference to i
   std::cout << "ip = " << ip << std::endl;
   std::cout << "*ip = " << *ip << std::endl;
   std::cout << "i = " << i << std::endl;
   std::cout << "r = " << r << std::endl;
   std::cout << "&r = " << &r << std::endl;
   std::cout << " " << std::endl;

   int j, *jp = 0;
//  j is an int
//  jp is a pointer initialized to 0. That an int?
   std::cout << "j = " << j << std::endl;
   std::cout << "jp = " << jp << std::endl;
//   std::cout << "*jp = " << *jp << std::endl;

   int* kp, kp2;
// kp is a pointer to an int
// kp2 is an int
   std::cout << "kp = " << kp << std::endl;
   std::cout << "*kp = " << *kp << std::endl;
   std::cout << "kp2 = " << kp2 << std::endl;

   return 0;
}
