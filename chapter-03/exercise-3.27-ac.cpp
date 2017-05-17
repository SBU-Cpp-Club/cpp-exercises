#include<iostream>
#include<vector>
using std::cout;
using std::cin;
using std::endl;
using std::string;

int main(){

   int txt_size();

   unsigned buf_size = 1024;  
   int ia[buf_size];                 // should be illegal as buf_size not const but works

   int ic[4*7-14];                   // legal as literals

   int ib[txt_size()];               // should be illegal because not constant but works

   char st[12] = "fundamental";      // illegal no space for null.


   for (unsigned i = 0; i < buf_size; i++){
        ia[i] = i;
        cout << ia[i] << " ";
   }
   cout << endl;

   for (int j = 0; j < txt_size(); j++){
        ib[j] = j;
        cout << ib[j] << " ";
   }
   cout << endl;

   return 0;
}

int txt_size(){
   return 512;
}


