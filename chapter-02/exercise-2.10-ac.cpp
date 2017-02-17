#include<iostream>
   std::string global_str; 
   int global_int;
int main(){
//   std::string global_str; 
//   int global_int;
   std::cout  << "global_str = " << global_str << std::endl;
   std::cout << "global_int = " << global_int << std::endl;

   return 0;
}
// apparently in or out of the routne is what is important. PGI compiler
// catches this.
