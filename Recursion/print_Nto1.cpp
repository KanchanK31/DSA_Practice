#include<iostream>
using namespace std;
void printnum(int N)
{  
    
    if(N)
    {
        cout<<N<<" ";
        printnum(N-1);
        
    }
    
    
}

int main()
{
    int n;
    cout<<"enter value of n"<<endl;
    cin>>n;
    printnum(n);
    cout<<endl;
    return 0;
    
} 
