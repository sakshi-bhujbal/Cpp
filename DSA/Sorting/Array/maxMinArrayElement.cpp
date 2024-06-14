#include<iostream>
using namespace std;
int main(){
    int arr[]={5,8,9,12,67,45};
    int n=sizeof(arr)/4;
    int mx=INT_MIN;
    int mn=INT_MAX;

    for(int i=0;i<n;i++){
        // if(arr[i]>mx){
        //     mx=arr[i];
        // }
        mx=max(mx,arr[i]);
        mn=min(mn,arr[i]);

    }
    cout<<mx<<endl;
    cout<<mn;
}