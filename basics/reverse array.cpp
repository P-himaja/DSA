
#include <iostream>
using namespace std;
// Reverse an array
void swapar(int ar[],int n)
{
   int start=0;
   int end=n-1;
    while(start<end)
    {
   swap(ar[start],ar[end]);
   start++;
   end--;
    }
    

}
void inputar(int ar[],int n)
{ cout<<"Enter the array:\n";
    for (int i = 0; i < n; i++)
    {
       
      cin>>ar[i];
    }
    cout<<endl;
    
}
void printar(int ar[],int n)
{
    for (int i = 0; i < n; i++)
    {
      cout<<ar[i]<<" ";
    }
    cout<<endl;
    
}
int main()
{
    int ar[100],n;
    cout<<"Enter number of elements\n";
    cin>>n;
    inputar(ar,n);
    cout<<"Before swapping\n";
    printar(ar,n);
swapar(ar,n);
  cout<<"After swapping\n";
 printar(ar,n);
}
