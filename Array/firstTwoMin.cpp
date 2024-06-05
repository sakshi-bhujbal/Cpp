#include<iostream>
using namespace std;
int main()
{
    int arr[]={3,6,4,8,9};
    int n=sizeof(arr)/4;
    int mn=INT_MAX;

    for(int i=0;i<n;i++){
        mn=min(mn,arr[i]);
    }
    int secmn=INT_MAX;
    for(int i=0;i<n;i++){
        if(arr[i]!=mn)
        secmn=min(secmn,arr[i]);
    }
    cout<<"The first two min elements of array are: "<<mn<<" and "<<secmn;
}