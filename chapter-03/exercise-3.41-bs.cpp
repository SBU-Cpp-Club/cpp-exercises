#include<vector>
#include<iostream>
#include<string>
using std::string;
using std::cin;
using std::cout;
using std::endl;
using std::vector;

int main()
{

   //from page 125

   int int_arr[] = {0, 1, 2, 3, 4, 5};

   vector<int> ivec(std::begin(int_arr), std::end(int_arr));

   for (auto i : ivec)
     cout<< i << " ";

   cout<<endl;

   return 0;

}
