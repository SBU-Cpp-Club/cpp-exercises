
#include <iostream>

int main()
{

     int v1 = 0, v2 = 0;
     //use a not declared variable, v is not declered
     //std::cin >> v >> v2; 
     //error: ‘v’ was not declared in this scope
     std::cin >> v1 >> v2;

     //if use : instead of ; 
     //error: expected ‘;’ before ‘:’ token
     std::cout << "Read each file." << std::endl; //:

     //if missing quotes 
     //std::cout << Update master. << std::endl;
     //error: ‘Update’ was not declared in this scope
     std::cout << "Update master." << std::endl;

     //if second output operation is missing
     //std::cout << "Write new master" std::endl;
     //error: expected ‘;’ before ‘std’
     std::cout << "Write new master" << std::endl;

     //missing ; on resturn 
     // return 0
     // expected ‘;’ before ‘}’ token
     return 0;
}
