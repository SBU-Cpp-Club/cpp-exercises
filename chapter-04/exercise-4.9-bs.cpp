#include<iostream>
using std::cin;
using std::cout;
using std::endl;


int main()
{

    const char *cp = "Hello World";

    //since cp is different than 0 then evaluates the right which is also different than 0
    //so it is true 
    if (cp && *cp)
    {
      cout << cp << endl;
      cout << *cp << endl;
    }
 
  
    return 0;
}
