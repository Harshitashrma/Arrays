#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter isze of array : "<<endl;
    cin>>n;

    int arr[n];
    cout<<"Enter array elements : "<<endl;

    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    cout<<"array is : ";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }

    int max=0;

    for(int i=0;i<n;i++)
    {
        if(arr[i]>max)
        max=arr[i];
    }

    cout<<"\nMaximum number in array is : "<< max<<endl;

    return 0;
}