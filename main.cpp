#include <iostream>
using namespace std;

int main()
{
   float x;
   float i=4;
   float sum=0;

   for(int i =1; i<5;i++)
   {
       cout<<"please enter the number"<<endl;
       cin>>x;
       sum=sum+x;
   }
   float average;
   cout<<"sum of the numbers ="<<sum<<endl;

   average =sum/(i-1);
   cout<<"average ="<<average<<endl;

   return 0;
}
