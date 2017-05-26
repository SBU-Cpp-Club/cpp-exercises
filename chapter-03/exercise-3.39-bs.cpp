
#include<iostream>
#include<string>
#include<cstring>
using std::string;
using std::cin;
using std::cout;
using std::endl;

int main()
{
    string s1, s2;
    const char ca1[] = "equal";
    const char ca2[] = "equal";

    s1="equal";
    s2="equal"; 


   //compare two strings
    if (s1 == s2)
        cout << "Strings are equal" <<endl;


   //compare to C-Style strings
   if ( std::strcmp(ca1,ca2) == 0)
       cout <<"C-Style strings are equal"<<endl;

    return 0;

}
