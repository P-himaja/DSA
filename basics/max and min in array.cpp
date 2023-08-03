 #include <iostream>
    using namespace std;
    int arrmax(int a[],int size )
    {
      int maxm=INT32_MIN;
      for(int i=0;i<size;i++)
      {
        cin>>a[i];
        maxm=max(maxm,a[i]);
      }
      return maxm;
    }
int arrmin(int a[],int size )
    {
      int minm=INT32_MAX;
      for(int i=0;i<size;i++)
      {
        minm=min(minm,a[i]);
      }
      return minm;
    }
    int main()
    { int size;
    cin>>size;
      int ammu[100];
    cout<<"The maximum is "<<arrmax(ammu,size )<<endl;
cout<<"The minimum is "<<arrmin(ammu,size )<<endl;
return 0;
 }
