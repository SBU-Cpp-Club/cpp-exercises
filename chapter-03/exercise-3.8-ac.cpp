#include<iostream>
using std::cout;
using std::endl;
using std::string;

int main(){
   string s1;
   int i;
   int len1;

   getline(std::cin,s1);
   cout << s1 << endl;

   for (auto &c : s1) {
   c = 'X';
   }

   cout << "After range for " << s1 << endl;

   len1 = s1.size();
 
   i = 0;
   while(i <= len1){
      s1[i] = 'Y';
      i++;
   }

   cout << "After while " << s1 << endl;

   for(i=0; i < len1; i++){
   s1[i] = 'Z';
   }
  
   cout << "After traditional for " << s1 << endl;

   return 0;
}

