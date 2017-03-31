//
#include<iostream>

int main()
{

   
   int a = 3, b = 4; 
   decltype(a) c = a;    // c is an int
   auto d = a;           // c an int here, same result.

// is this a good example?
   decltype(a=b) e = a;  // assignment makes d a reference
   a = b;
   auto f = a;      // assignment makes d a reference illegal

   std::cout << "a = " << a << std::endl;
   std::cout << "b = " << b << std::endl;
   std::cout << "c = " << c << std::endl;
   std::cout << "d = " << d << std::endl;
   std::cout << "e = " << e << std::endl;
   std::cout << "f = " << f << std::endl;
   
// book makes the statment "It is worth noting that decltype is th eonly context in which
// a variable defined as a references i not treated as a synonym for the object to which
// it refers." Can we make an example?
// Does this do it?
   
   int u = 42, &v = u;

   decltype(v) w = v;
   auto x = v;

   u = 44;

   std::cout << "u = " << u << std::endl;
   std::cout << "v = " << v << std::endl;
   std::cout << "w = " << w << std::endl;
   std::cout << "x = " << x << std::endl;
   return 0;
}
