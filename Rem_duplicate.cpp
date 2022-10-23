//Remove duplicates without using temporary array

#include<iostream>
using namespace std;
int function1(int arr[],int n)
{
    int j=0;
    for(int i=0;i<n-1;i++)
    {
        if(arr[i]!=arr[i+1])
        //checking if the next element is same as previous,
        //j=0=index for new array which do not contains duplicates,
        //ex-[1,1,2,3,4,4]
        //arr[1]!=arr[2]=new array[1]
        //arr[2]!=arr[3]=[1,2]
        //arr[3]!=arr[4]=[1,2,3]
        //here last element is not included in new arr.
        //hence add it to new array, as arr[j]=arr[n-1] 
        {
            arr[j]=arr[i];
            j++;
        }
        
    }
    
    arr[j]=arr[n-1];
    return j;
}
int main()
{
    int n1,n;
    n=10;
    int arr[10]={1,2,33,33,34,34,56,56,56,89};
    cout<<"array before removing duplicates is:"<<endl;
     for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    n1=function1(arr,n);
    //print updated array
    cout<<"array after removing duplicates is:"<<endl;
    for(int i=0;i<n1;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    

    
}