
#include<iostream>
#include<string>
using std::string;
using std::cin;
using std::cout;
using std::endl;

int main()
{
    string input;

    //while (getline(cin, input))  //read one line at a time
    while (cin >> input)  //read one word at a time
        cout << input << endl;

    return 0;

}
