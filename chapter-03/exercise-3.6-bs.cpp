
#include<iostream>
#include<string>
using std::string;
using std::cin;
using std::cout;
using std::endl;

int main()
{
    string input;

    getline(cin,input);

    for (auto &c : input)
        c = 'X';
    cout << input <<endl;


    return 0;

}
