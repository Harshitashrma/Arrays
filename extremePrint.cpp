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

   int s=0;
   int e=n;
   cout<<"Exreme print : ";
   while(s<e)
   {
    cout<<arr[s]<<" ";
    cout<<arr[e-1]<<" ";
    s++;
    e--;
   }

    return 0;
}