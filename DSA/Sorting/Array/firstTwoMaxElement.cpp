#include<iostream>
using namespace std;
int main(){
    int arr[]={5,8,9,12,67,45};
    int n=sizeof(arr)/4;
    int mx=INT_MIN;
    int mx2=INT_MIN;

    for(int i=0;i<n;i++){
        
        mx=max(mx,arr[i]);
    }

    for(int i=0;i<n;i++){
        if(arr[i]!=mx)
        
        mx2=max(mx2,arr[i]);
    }
    cout<<mx<<endl;
    cout<<mx2;
}