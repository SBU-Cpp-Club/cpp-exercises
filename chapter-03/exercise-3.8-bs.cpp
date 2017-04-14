
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

    for (decltype(input.size()) i = 0; i < input.size(); ++i )
        input[i] = 'X';
    cout << input <<endl;


    return 0;

}
