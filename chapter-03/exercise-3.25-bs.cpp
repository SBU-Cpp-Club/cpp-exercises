
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
   vector<unsigned> scores(11,0);
   unsigned grade;

  //read the grades
   while(cin >> grade){
       if (grade <= 100){
           auto it = scores.begin() + grade/10;
	   *it = *it+1;
       }
   }

   for (auto i : scores)
     cout << i << endl;

    return 0;
}
