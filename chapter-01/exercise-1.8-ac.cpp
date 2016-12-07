#include<iostream>

int main(){
   std::cout  << "/*" << std::endl; // legal
   std::cout  << "*/" << std::endl; // legal
//   std::cout  << /* "*/" */ << std::endl; // not legal
   std::cout  << /* "*/" /* "/*  "/*"  */ << std::endl; // legal
   return 0;
}

