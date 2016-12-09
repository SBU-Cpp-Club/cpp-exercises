#include<iostream>
using namespace std;
//why do we not need the line above?
//yes, I know we haven't seen comments yet.

int main(){
   cout  << "Enter two integers:" << std::endl;
   int v1 = 0, v2 = 0;
   cin >> v1 >> v2;
   cout  << "the product of " << v1 << " and " << v2
              << " is " << v1 * v2 << std::endl;
   return 0;
}

