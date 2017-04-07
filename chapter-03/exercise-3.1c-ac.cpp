#include<iostream>

using std::cout;
using std::cin;
using std::endl;

int main(){
   cout  << "Enter integer range, lower and higher :" << endl;
   int v1 = 0, v2 = 0;
   cin >> v1 >> v2;
   while (v1 <= v2) {
       cout  << v1 << endl;
       ++v1; 
   }
   return 0;
}

