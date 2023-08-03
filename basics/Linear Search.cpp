
#include <iostream>
using namespace std;
// Linear Search
   bool searcharray(int ar[],int n,int key)
   {
    for (int i = 0; i < n; i++)
    {
    if(key==ar[i])
    return 1;
    }
    return 0;
   }
void inputar(int ar[],int n)
{ cout<<"Enter the array:\n";
    for (int i = 0; i < n; i++)
    {
      cin>>ar[i];
    }
    cout<<endl;
    
}

int main()
{
    int ar[100],n;
    cout<<"Enter number of elements\n";
    cin>>n;
    inputar(ar,n);
    cout<<"Enter which number to search\n";
    int key;
    cin>>key;
if(searcharray(ar,n,key))
cout<<" the number is present\n";
else 
cout<<" the number is absent\n";
   
}
