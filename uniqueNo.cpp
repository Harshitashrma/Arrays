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

  int ans=0;

  for(int i=0;i<n;i++)
  {
    ans^=arr[i];
  }

  cout<<"\nUnique number is : "<< ans;

    return 0;
}