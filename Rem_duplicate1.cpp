//Remove duplicates using temporary array

#include<iostream>
using namespace std;
int function2(int arr[],int n)
{
    int arr2[n];
    int j=0;
    for(int i=0;i<n-1;i++)
    {
        //iterate over 0 to n-1,bcz last and 2nd last element will be comapred by
        //i and i+1  ex=[11,11,22,33,33,33,44,44]
        //index of last ele=n-1  2nd last=n-2  when i:=n-2 it will be comapred with
        //n-2+1 th element, i.e. n-1th(last) .. so loop should stop here,
        //hence condition is i<n-1 ||i<=n-2
        if(arr[i]!=arr[i+1])
        {
            arr2[j]=arr[i];
            j++;
        }
    }
    //copy last element
    arr2[j++]=arr[n-1];
    //copy elements of new array to original array, 
    //otherwise we'll have to return array and its size also
    for(int i=0;i<j;i++)
    {
        arr[i]=arr2[i];
    }
    //return index of new array,upto which unique elements are inserted 
    return j;
}

int main()
{
    int n1,n;
    n=10;
    int arr[10]={1,2,33,33,34,34,56,56,56,89};
    //int arr2[n];
    cout<<"array before removing duplicates is:"<<endl;
     for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    n1=function2(arr,n);
    //print updated array
    cout<<"array after removing duplicates is:"<<endl;
    for(int i=0;i<n1;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    

    
}