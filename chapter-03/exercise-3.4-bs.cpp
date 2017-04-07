
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

    if (s1 == s2)
        cout << "Strings are equal" <<endl;
    else
        if (s1<s2)
	    cout << s2 << " is larger" << endl;
	else 
	    cout << s1 << " is larger" << endl;

    return 0;

}
