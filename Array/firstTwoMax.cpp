#include<iostream>
using namespace std;
int main()
{
    int arr[]={3,6,4,8,9};
    int n=sizeof(arr)/4;
    int mx=INT_MIN;

    for(int i=0;i<n;i++){
        mx=max(mx,arr[i]);
    }
    int secmx=INT_MIN;
    for(int i=0;i<n;i++){
        if(arr[i]!=mx)
        secmx=max(secmx,arr[i]);
    }
    cout<<"The first two max elements of array are: "<<mx<<" and "<<secmx;
}