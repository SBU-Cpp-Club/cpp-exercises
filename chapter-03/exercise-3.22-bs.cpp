
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
   vector<string> text{"I'm initializing ", "this text","","to try the "," excercise"};

   for (auto it = text.begin(); it != text.end() && !it->empty(); it++)
       for (auto it2 = (*it).begin(); it2 != (*it).end(); it2++)
           *it2 = toupper(*it2);

   for (auto it = text.cbegin(); it != text.cend(); it++)
       cout << *it <<endl;

   return 0;
}
