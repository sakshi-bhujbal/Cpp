#include<iostream>
using namespace std;
int main()
{
    int arr[]={3,6,4,8,9};
    int n=sizeof(arr)/4;
     cout<<"The array elements before reverse are: ";
    for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";
    int i=0;
    int j=n-1;

    while(i<j){
        int temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
        i++;
        j--;
    }
    cout<<endl;
    cout<<"The array elements after reverse are: ";
for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";
}