
#include<iostream>
#include<string>
using std::string;
using std::cin;
using std::cout;
using std::endl;

int main()
{
    string input;
    decltype(input.size()) i = 0;

    getline(cin,input);

    while (i < input.size()){
        input[i] = 'X';
	++i;
    }
    cout << input <<endl;


    return 0;

}
