#include<iostream>
#include<vector>
using std::cout;
using std::endl;
using std::string;
using std::vector;

int main(){
   //vector<int> ivec;     
   vector<int> ivec(1);     
   ivec [0] = 42;

   cout << "size of ivec = " << ivec.size() << endl;
   cout << "content of ivec = " << ivec.size() << endl;
   for (auto j : ivec){
     cout << j << " ";
   }
   cout << endl; 


   return 0;
}

