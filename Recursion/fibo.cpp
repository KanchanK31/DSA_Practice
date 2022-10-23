#include<iostream>
using namespace std;
//using recursion
int fibo(int N)
{
    int ans;
    if(N==0 || N==1)
        ans=N;
    else    
        {
            ans=fibo(N-1)+fibo(N-2);
            
        }
        return ans;
}
//without recursion
int fibo2(int N)

{
    int a=0,b=1,c=0;
    if(N==0)
        return N;
    if(N==1)
        return N;
    for(int i=2;i<=N;i++)
    {
        c=a+b;
        a=b;
        b=c;
    }
    return c;

}

int main()
{
    int n,x,x1;
    cout<<"Enter n: "<<endl;
    cin>>n;
    
    
    //printing series of fibbonacci numbers
    cout<<"Fibbonacci series is:"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<fibo(i)<<" ";
    }
    x=fibo(n);
    cout<<endl;
    cout<<"(using recursion)fibbonacci number is "<<x<<endl;
    x1=fibo2(n);
    cout<<"(without recursion)fibbonacci number is "<<x1<<endl;
    
    return 0;
}