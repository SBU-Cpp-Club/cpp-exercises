#include<iostream>
#include<cstring>
using std::cin;
using std::cout;
using std::endl;

int main()
{
    const char ca1[] = "hello";
    const char ca2[] = "world";

    const int size = std::strlen(ca1) +std::strlen(ca2);

    char ca3[size];

    std::strcpy(ca3, ca1);
    std::strcat(ca3, ca2);

   for(auto i : ca3)
     cout<< i;

   cout<<endl;
   

    return 0;

}
