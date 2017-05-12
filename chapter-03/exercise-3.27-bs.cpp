


int main()
{
  
  const unsigned buf_size = 1024;
  int ia[buf_size]; //should be illegal since buf_size is not constant. but just threw warning

  //int ia[txt_size()]; txt_size() should return a const int

  int ia2[4 * 7 - 14];  

  char st[12] = "fundamental"; //illegal since the size 11 doesn't take into account the null 

  return 0;
}
