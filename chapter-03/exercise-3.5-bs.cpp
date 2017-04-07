
#include<iostream>
#include<string>
using std::string;
using std::cin;
using std::cout;
using std::endl;

int main()
{
    string prev;
    string input;

    while (getline(cin, input)){
        prev = prev +" " +input;
        cout << prev << endl;
    }
    return 0;

}
