//  /*
//  *  comment pairs /*  */ cannot nest,
//  *  "cannot nest" is considered source code,
//  *  as is the rest of the program  
//  */


// When compiling without the single-line comments, I get: " warning: "/*" within comment [-Wcomment] "
// and then the error associated to the compiler not understanding the expected command after the first "*/" 

int main()
{
   return 0;
}

