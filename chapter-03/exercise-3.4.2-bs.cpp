
#include<iostream>
#include<string>
using std::string;
using std::cin;
using std::cout;
using std::endl;

int main()
{
    string s1, s2;

    cin >> s1;
    cin >> s2;

    if (s1.size() == s2.size())
        cout << "Strings have the same length" <<endl;
    else
        if (s1.size() < s2.size())
	    cout << s2 << " is longer" << endl;
	else 
	    cout << s1 << " is longer" << endl;

    return 0;

}
