//static variables are permanent variables within their own function or file,    PAge 62
//but they maintain their values between calls-- useful when write generalized functions and function libraries that other programmers may use. 

//static has different effects upon local variables and global variables.

//static Local Variables
/*
When you apply the static modifier to a local variable, the compiler creates permanent storage for it, much as it creates storage for a global variable. 

The key difference between a static local variable and a global variable is that the static local variable
remains known only to the block in which it is declared and retains its value between function calls.*/



 /*static local variables important to the creation of stand-alone functions, several types of routines must preserve a value between calls.

ex-  a function - number-series generator that produces a new value based on the previous one.*/

/*You could use a global variable to hold this value. However, each time the function is used in a program,
you would have to declare that global variable and make sure that it did not conflict with any other global variables already in place.

The better solution is to declare the variable that holds the generated number to be static, as in this program fragment:*/

#include <iostream>
using namespace std;

int series(void);    // always declare the function before main
int main()
{

  series();
  return 0;
}


int series(void)
{
    static int series_num = 1000;
    series_num = series_num+23;
    cout<<"Random Series number = "<<series_num;

    return series_num;
}
