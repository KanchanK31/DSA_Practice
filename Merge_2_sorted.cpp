//code to merge to sorted array
//ex=A=[1,2,5,8,33]  B=[3,7,34,45]
//[1,2,3,5,8,33,34,45] 
#include<iostream>
using namespace std;
void mergearr(int a[],int b[],int n1,int n2)
{

    int c[n1+n2];
    int i=0;
    int j=0;
    int k=0;
    while((k<n1+n2)&&(i<n1)&&(j<n2))
    {
        if(a[i]<=b[j])
            {
                c[k]=a[i];
                k++;
                i++;
            }
        else
            {
                c[k]=b[j];
                k++;
                j++;
            }
    }
    while(i<n1)
    {
        c[k]=a[i];
        k++;
        i++;

    }
    while(j<n2)
    {
        c[k]=b[j];
        k++;
        j++;
    }
    for(int i=0;i<(n1+n2);i++)
    {
        cout<<c[i]<<" ";
    }

}
int main()
{
    int n1,n2;
    cout<<"enter size of array 1 "<<endl;
    cin>>n1;
    int a[n1];
    cout<<"enter array1 elements"<<endl;
    for(int i=0;i<n1;i++)
    {
        cin>>a[i];
    }
    cout<<"enter size of array 2 "<<endl;
    cin>>n2;
    int b[n2];
    cout<<"enter array1 elements"<<endl;
    for(int i=0;i<n2;i++)
    {
        cin>>b[i];
    }
    mergearr(a,b,n1,n2);

}