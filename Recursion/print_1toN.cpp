//code to print 1 to n numbers.
#include<iostream>
using namespace std;
void printnum(int N)
{   
    if(N)
    {
        printnum(N-1);
        cout<<N<<" ";
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
