//
#include<iostream>

int main()
{
   int* ip, i, &r = i;

   std::cout << "ip = " << ip << std::endl;
   std::cout << "*ip = " << *ip << std::endl;
   std::cout << "i = " << i << std::endl;
   std::cout << "r = " << r << std::endl;
   std::cout << "&r = " << &r << std::endl;
   std::cout << " " << std::endl;

   int j, *jp = 0;
   std::cout << "j = " << j << std::endl;
   std::cout << "jp = " << jp << std::endl;
//   std::cout << "*jp = " << *jp << std::endl;

   int* kp, kp2;
   std::cout << "kp = " << kp << std::endl;
   std::cout << "*kp = " << *kp << std::endl;
   std::cout << "kp2 = " << kp2 << std::endl;

   return 0;
}
