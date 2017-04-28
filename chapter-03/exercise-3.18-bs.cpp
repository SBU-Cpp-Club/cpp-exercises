
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
    vector<int> ivec; 
    //ivec[0] = 42; //it is not legal, beacuse ivec is empty you can fix it by using push_back
    ivec.push_back(42);
    return 0;
}
