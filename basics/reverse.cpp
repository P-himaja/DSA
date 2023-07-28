
#include <iostream>
using namespace std;
    int main()
{
int t,rev=0,x;
cout<<"enter the number";
cin>>x;
   while (x!=0)
   {
    t=x%10;
   rev=rev*10 +t;
    x=x/10;
   }
if((rev>INT32_MAX/10) || rev<INT32_MIN/10)
     cout<< "The reverse is 0";
     else
 cout<< "The reverse is "<<rev;
    }
