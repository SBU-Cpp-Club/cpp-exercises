
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
   string input;
   vector<string> v;

  // read sequence of words
   while(cin >> input){
       v.push_back(input);
   }

   //change words to uppercase
   for (auto &i: v)
       for (auto &c : i)
           c = toupper(c);

   //print 8 words each line
   int c = 0;
   for (auto i : v){
       c ++; 
       cout << i << " ";
       if (c%8 == 0)
          cout <<endl;
    }
   
   cout <<endl;

    return 0;
}
