//the following program is for showing the gobal variable declaration   : page57
#include <iostream>
using namespace std;
int count;
// count is global

void func1(void);
void func2(void);

int main(void)
{
  count = 100; // global variable
{
    int count=10;  // local variable inside the loop
    for (int var = 0; var<5; var++) {
        cout<<"Number ="<<count<<endl;
        count++;
    }
}
func1();
return 0;
};

void func1(void)
{
int temp;
temp= count;     // count is global variable
func2();
cout<<" count is "<<count<<endl;
}

void func2(void)
{
    for(int count=1; count<10; count++)
    {
     putchar('.');
    }
}

