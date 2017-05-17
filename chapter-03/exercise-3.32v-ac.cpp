#include<iostream>
#include<vector>
using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::vector;


int main(){
   vector<int> v1;  // use something like the sizet thing of arrays?

   for (int i = 0; i != 10; ++i)  //is this a cromulent way?
        v1.push_back(i);

   for (auto it = v1.begin(); it != v1.end(); ++it)
        cout << *it << " ";

   cout << endl;

   return 0;
}
