//bubble sort:O(n^2)

#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter size of an array"<<endl;
    cin>>n;
    int arr[n];
    cout<<"enter array elements"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    //in bubble sort, at each iteration we place an(greater/smaller) element to its correct position,
    //for ascending order= we'll check if the previous element is greater than next, if yes then
    //move it forward,(swap) ex. 23 12 then 12 23
    //for descending order= we'll check if the previos element is less than next,ex. 12 56 then swap 
    //56 12 ..
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    cout<<"sorted array is:";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }

   return 0; 
} 
