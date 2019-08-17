//the following program prints the number 10 ten times: page 51
#include <iostream>
using namespace std;

void f(void);

int main(void)
{
for (int i=0;i<10;i++) {
   f();

}
return 0;
}

void f(void){
int j = 10;
cout<<"Number ="<<j<<endl<<endl;
j=j+1;
}
