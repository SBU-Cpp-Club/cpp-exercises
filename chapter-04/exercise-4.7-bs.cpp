#include<iostream>
using std::cin;
using std::cout;
using std::endl;


int main()
{

    short short_value = 32767;
    
    short_value += 1;

    cout << "short_value: " << short_value << endl;

    short_value = -32767;
  
    short_value -= 2;
    cout << "another overflow? " << short_value <<endl;

 
  
    return 0;
}
