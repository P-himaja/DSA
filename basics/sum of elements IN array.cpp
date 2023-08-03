    #include <iostream>
    using namespace std;
    int main()
    { 
      int size,sum=0;
    cin>>size;
      int ammu[100];
   for(int i=0;i<size;i++)
      {
        cin>>ammu[i];
        sum+=ammu[i];
      }
      cout<<"The sum is "<<sum<<endl;
return 0;
 }
