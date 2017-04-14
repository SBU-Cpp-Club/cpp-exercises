
#include<iostream>
#include<string>
using std::string;
using std::cin;
using std::cout;
using std::endl;

int main()
{
    string input;
    string output;

    getline(cin,input);

    for (auto c : input)
 
        if (!ispunct(c))
           output += c;
    
    cout << output <<endl;


    return 0;

}
