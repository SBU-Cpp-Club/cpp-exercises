
#include <vector>
#include<iostream>
#include<string>
using std::string;
using std::cin;
using std::cout;
using std::endl;

using std::vector;



int main()
{
   int input;
   vector<int> v;

   while(cin >> input){
       v.push_back(input);
   }

   for (auto i: v)
       cout << i << endl;

    return 0;
}
