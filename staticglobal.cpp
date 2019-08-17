/*  This means that even though the variable is global, routines in other files may have no knowledge
of it or alter its contents directly, keeping it free from side effects.*/

/* For the few situations where a local static variable cannot do the job, you can create a small file that contains
only the functions that need the global static variable, separately compile that file, and
use it without fear of side effects */


/* global static variable,
 the series generator example from the previous section is recoded so that a seed value initializes the series through a call to a second
function called series_start( ).

The entire file containing series( ), series_start( ), and series_num */

#include <iostream>
using namespace std;
#include "staticgbdeclaration.h"

int main()
{


  series_start(1000);
  series();
  series();
  cout<<"Random Series number = "<<series_num;
  return 0;
}
