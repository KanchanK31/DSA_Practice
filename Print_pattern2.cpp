//code to print following pattern for given value of n
//****
//***
//**
//*

#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter value of n"<<endl;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        for(int j=n;j>=i;j--)
        {
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
}