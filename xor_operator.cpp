 /* xor operation is true if and only if one operand (but not both)    is true
  *
  * Both the relational and logical operators are lower in precedence than the  arithmetic operators.
  *
  * That is, an expression like 10 > 1+12 is evaluated as if it were
written 10 > (1+12). Of course, the result is false.


*/
#include <iostream>
using namespace std;

int vxor(int a , int b);

int main()
{
    cout<<"xor(0,0) = "<<vxor(0,0)<<endl;
    cout<<"xor(1,0) = "<<vxor(1,0)<<endl;
    cout<<"xor(1,1) = "<<vxor(1,1)<<endl;
    cout<<"xor(0,1) = "<<vxor(0,1)<<endl;
    int x;
    x=100;

    cout<<" x is greater than 10 or not = "<<(x>10)<<endl;
    return 0;
}

/* Perform a logical XOR operation using the stwo arguments. */

int vxor( int a, int b)
{

return (a || b) && !(a && b);
}

/*Output

xor(0,0) = 0
xor(1,0) = 1
xor(1,1) = 0
xor(0,1) = 1

Highest
!

> >= < <=

== !=

&&

Lowest   ||



*/
