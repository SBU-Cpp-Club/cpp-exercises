//
#include<iostream>

int main()
{

   
   int a = 3, b = 4; 
   decltype(a) c = a;    // c is an int
   decltype((b)) d = a;  // parentheses on b make d a reference
//   decltype((b)) e;  // parentheses on b make d a reference- won't work as e a refernece must be initialized. Quirk is that the double parentheses is always a reference.
   
   ++c;
   ++d;

   std::cout << "a = " << a << std::endl;
   std::cout << "b = " << b << std::endl;
   std::cout << "c = " << c << std::endl;
   std::cout << "d = " << d << std::endl;

   return 0;
}
