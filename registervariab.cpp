// register Variables

/*The register storage specifier originally applied only to
 * variables of type int,
 * char, or
 * pointer types. but  now may be applied to any type of variable.
* except a register - may still receive preferential treatment by the compiler. */

/* Compile fast : on a normal variable because the register variable was actually held in the CPU and did not require a memory access to determine or modify its value */

/* " (Standard C++ states that register is a "hint to the implementation that the object so declared will be heavily used.")

* In fact,
it is technically permissible for a compiler to ignore the register specifier altogether
and treat variables modified by it as if they weren't, but this is seldom done in practice.

*  only apply the register specifier to
* local variables
* the formal parameters in a function.
* Global register variables are not allowed.

* This function computes the result of M e for integers          */

#include <iostream>
using namespace std;

int int_pwr( int m,register int e);

int main()
{
 int_pwr(5,8);
  cout<<"Random Series number = ";
  return 0;
}

int int_pwr(register int m,register int e)
{
                register int temp;
                temp = 1;
                for(; e; e--) temp = temp * m;
                return temp;

}
