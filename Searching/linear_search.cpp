#include<iostream>
using namespace std;
int main()
{
    int n,x,low,high,mid;
    int ind=0;
    cout<<"enter number of elements in the array"<<endl;
    cin>>n;
    int arr[n];
    int i;
    cout<<"enter elements"<<endl;
    for(i=0;i<n;i++)
    {
            cin>>arr[i];
    }
    cout<<"array elements are"<<endl;
    for(i=0;i<n;i++)
    {
        cout<<arr[i]<<endl;
    }
    cout<<"enter element to be searched"<<endl;
    cin>>x;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==x)
        {
            ind=i;
            break;
        }
    }
    if(ind==0)
    {
        cout<<"Element not found"<<endl;
    }
    else    
    {
        cout<<"Element found at index "<<ind<<endl;
    }





    return 0;
}