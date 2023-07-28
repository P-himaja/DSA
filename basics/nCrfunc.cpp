
#include <iostream>
using namespace std;
int fact (int n1)
{
   int f=1;
   while(n1)
   {
    f*=n1;
    n1--;
   }
return f;
}
int ncr(int n,int r)
{
return fact(n)/(fact(r)*fact(n-r));
}
    int main()
{  
    int n,r;
    cout<<"Enter the value of n and r \n";
    cin>>n>>r;
    if(n>0 && r>=0 && n>r)
    cout<<"nCr value is "<<ncr(n,r);
    else 
    cout<<"invalid input";
}



    
