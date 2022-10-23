#include<iostream>
using namespace std;
int facto(int N)
{
    int ans=0;
    if(N==0 || N==1)
        ans=1;
    else
    {
        ans=(facto(N-1))*N;
        //if N=5 then in 1st call
        //ans=facto(4)*5
        //ans=facto(3)*4*5
        //ans=facto(2)*3*4*5
        //ans=facto(1)*2*3*4*5
        //ans=1*2*3*4*5
    }
      
        return ans;
}
int main()
{
    int n,x;
    cout<<"Enter n: "<<endl;
    cin>>n;
    x=facto(n);
    cout<<"factorial of "<<n<<" is "<<x<<endl;
    //fibo(n);
    

    return 0;
}