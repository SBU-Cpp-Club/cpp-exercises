

int main()
{
   
    int ival = 1.01; //valid
   // b)  int &rval1 = 1.01 invalid, initializer must be an object
    int &rval2 = ival; //valid
    //d) int &rval3 invalid, reference must be initizalized 
    
    return 0;

}
