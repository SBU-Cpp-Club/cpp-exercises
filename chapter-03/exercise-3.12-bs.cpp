
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
    vector<vector<int> > ivec; //vector of vectors, should work
    //vector<string> svec = ivec; //error!! svec holds strings not vectors of ints
    vector<string> svec(10,"null"); //ten strings each element is "null"
    

    return 0;
}
