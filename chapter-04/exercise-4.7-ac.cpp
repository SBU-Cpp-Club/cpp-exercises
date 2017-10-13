#include<iostream>
#include<vector>
#include<string>
#include<cstring>
using std::cout;
using std::cin;
using std::endl;
using std::string;

int main()
{
// an overflow occurs when the program has an expression such as an assignment that
// produces a computed value that is outside of the range of values for a particular 
// type.
// 
//
// straight out of the book
short is1 = 32767;
short is2 = 32767;
is2 += is2;
cout << "short is1, is2 = " << is1 << "  " << is2 << endl;

// now a hacky example from  https://stackoverflow.com/questions/8782852/c-buffer-overflow
// try it with 0123456789abcdef1. Logic is that 0123456789abcdef is 16 bytes, so the 1
// causes an overflow.

  bool authenticated = false;

  while(!authenticated)
  {
    string username;
    string password;

    cout << "Username: ";
    getline(cin, username); // you may want to read input differently

    cout << "Pass: ";
    getline(cin, password); // same as above

    // you'll need to check cin.fail() to see whether the stream
    // had failed to read data, and exit the loop with "break".

    if(username == "admin" && password == "adminpass")
    {
      authenticated = true;
    }
    else
    {
      cout << "Wrong username and password, try again\n";
    }
  }

  if(authenticated)
  {
    cout << "Access granted\n";
  }


   int authentication = 0;
   char cUsername[ 10 ], cUser[10];
   char cPassword[ 10 ], cPass[10];

   cout << "Username: ";
   cin >> cUsername;

   cout << "Pass: ";
   cin >> cPassword;

   strcpy(cUsername, cUser);
   strcpy(cPassword, cPass);

   if( strcmp( cUsername, "admin" ) == 0 && strcmp( cPassword, "adminpass" ) == 0 )
   {
    authentication = 1;
   }
   if( authentication )
   {
    cout << "Access granted\n";
    cout << ( char )authentication;
   }
   else
   {
   cout << "Wrong username and password\n";
   }




/*
 int authentication = 0;
 char cUsername[ 10 ];
 char cPassword[ 10 ];

 std::cout << "Username: ";
 std::cin >> cUsername;

 std::cout << "Pass: ";
 std::cin >> cPassword;

 if( std::strcmp( cUsername, "admin" ) == 0 && std::strcmp( cPassword, "adminpass" ) == 0 )
 {
  authentication = 1;
 }
 if( authentication )
 {
  std::cout << "Access granted\n";
  std::cout << ( char )authentication;
 }
 else
 {
  std::cout << "Wrong username and password\n";
 }
*/

return 0;
}

