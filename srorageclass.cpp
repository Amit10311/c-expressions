//extern static  register   auto
//three categories of linkage: external, internal, and none.

//In general, functions and global variables - external linkage-  available to all files that comprise a program.

//Global objects declared as static - internal linkage- known only within the file in which they are declared.

// Local variables - no linkage - known only within their own block.

// use of  extern = an object is declared with external linkage elsewhere in the program.

// the difference  between a declaration and a definition.

// A declaration declares  the name and type of an object.
// A definition causes storage to be allocated for the  object.

//While there can be many declarations of the same object, there can be only one definition for the object.


// In most cases, variable declarations are also definitions.  However, by preceding a
//variable name with the extern specifier, you can declare a variable without defining it.
//Thus, when you need to refer to a variable that is defined in another part of your program,  you can declare that variable using extern

#include <iostream>
using namespace std;

int main()
{
extern int first, last; /* use global vars */
cout<<"First ="<<first<<endl<<"second number= "<<last<<endl;

return 0;
}

/* global definition of first and last */
int first = 10, last = 20;

// we declare extern variables in the end of the main and these are global variables. The extern specifier is needed when you want to use a variable that is declared later in the file.

//Remember, compiler
// finds a variable that has not been declared within the current block
// the compiler checks -if - - matches any of the variables declared within enclosing blocks.
// else
//then checks the previously declared global variables , assumes that that is the variable being referenced.


//  important use of extern that relates to mutiple-file programs. In C/C++,
//a program can be spread across two or more files, compiled separately, and then linked
//together.

// case:  some way of telling all the files about the global variables required by the program.
// The best way -  declare all of your global variables in one file and use extern declarations in other





