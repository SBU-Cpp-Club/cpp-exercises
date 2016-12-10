#include<iostream>

int main(){
   std::cout  << "Enter integer range, lower and higher :" << std::endl;
   int v1 = 0, v2 = 0;
   std::cin >> v1 >> v2;
   if (v1 > v2) {                //swap these as the user didn't follow instructions.
      int vtemp = 0;
      vtemp = v1;
      v1 = v2;
      v2 = vtemp;
   }
   while (v1 <= v2) {
       std::cout  << v1 << std::endl;
       ++v1; 
   }
   return 0;
}


