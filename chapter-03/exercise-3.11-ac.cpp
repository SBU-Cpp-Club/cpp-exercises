#include<iostream>
using std::cout;
using std::endl;
using std::string;

int main(){
   const string s = "Keep out!";  

   cout << "const string = " << s << endl;

   for (auto &c : s) {
      if (!ispunct(c)) cout << c << endl;
   }

   return 0;
}

