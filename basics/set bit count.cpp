
#include <iostream>
using namespace std;
int bitcount(int n )
{
    int set=0;
    while(n!=0)
    {
        if(n&1==1)
set++;
n=n>>1;
    }
    return set;
}
int main()
{
    int a,b;
    cout<<"Enter values of a and b\n";
    cin>>a>>b;
    cout<<"Total no. of set bits is "<<bitcount(a) +bitcount(b);
    }
    
