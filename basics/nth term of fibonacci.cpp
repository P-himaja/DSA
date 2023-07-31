    #include <iostream>
    using namespace std;
int fib(int n)
{
  int a=0,b=1,c;
  if(n==1)
  return a;
  if(n==2)
  return b;
for(int i=3;i<=n;i++)
{
  c=a+b;
  a=b;
  b=c;

}
  return c;

}
int main()
{
  int n;
  cout<<"Enter which term you need\n";
  cin>>n;
  cout<<"The "<<n<<"th term is "<<fib(n);
}
 
      
    
        


        
