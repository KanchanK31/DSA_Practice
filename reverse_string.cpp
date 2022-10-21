#include<iostream>
using namespace std;
int main()
{
    string st="This is string";
    cout<<"string is:"<<endl;
    cout<<st<<endl;;
    int n=st.length();
    int s=0;
    int e=n-1;
    while(s<e)
    {
        char temp=st[s];
        st[s]=st[e];
        st[e]=temp;
        s++;
        e--;
    }
    cout<<"reverse string is:"<<endl;
    cout<<st<<endl;
    return 0;
} 
