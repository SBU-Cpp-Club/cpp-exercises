#include<iostream>
using std::cout;
using std::endl;
using std::string;

int main(){
   string s1, s2;

   cout << s1 << endl; // see what an uninitialized string looks like

//   while (getline(std::cin,s1)) {   // how to gracefully terminate?
   while (s1!="99") {   // how to gracefully terminate?
       getline(std::cin,s1);
       cout << s1 << endl;
   }
   return 0;
}

