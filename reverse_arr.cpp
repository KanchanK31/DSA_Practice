#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter size of the array"<<endl;
    cin>>n;
    int arr[n];
    cout<<"enter array elements"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"reverse array using extra space:"<<endl;
    cout<<endl;
    cout<<"The array is:";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    //reverse using an extra space
    int arr2[n];
    int j=n;
    int i=0;
    for(i=0,j=n-1;j>=0,i<n;j--,i++)
    {
        arr2[i]=arr[j];
        cout<<arr2[i]<<" ";
    } 
    cout<<endl;
    //reverse without using an extra array
    cout<<endl;
    cout<<"reverse without using extra space"<<endl;
    cout<<endl;
    cout<<"array before reverse is:"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<"Reverse array is:";
    int s=0;
    int e=n-1;
    
        while(s<e){
        int temp=arr[s];
        arr[s]=arr[e];
        arr[e]=temp;
        s++;
        e--;
        }

 
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }

    return 0;
} 