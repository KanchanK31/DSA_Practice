//time complexity O(logn)
#include<iostream>
using namespace std;
int main()
{
    int n,x,low,high,mid;
    int ind=-1;
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
    low=0;
    high=n-1;
  
  while(low<=high)
    {
    mid=(low+high)/2;
    if(arr[mid]==x)
        ind=mid;
    if(arr[mid]>x)
    //if key x is small than mid, then it must be present in left part
        high=mid-1;
    else    
    //else key will be present in right part.
        low=mid+1;
    }

    //if index not get updated in while loop, then it means element not found
    if(ind==-1)
        cout<<"element not found"<<endl;
    else
        cout<<"the element is at index"<<" "<<ind<<endl;
    

    return 0;
}
