#include<iostream>
using namespace std;
int main(){
    int arr[]={5,8,9,12,67,45};
    int n=sizeof(arr)/4;
    int mn=INT_MAX;
    int mn2=INT_MAX;

    for(int i=0;i<n;i++){
        
        mn=min(mn,arr[i]);
    }

    for(int i=0;i<n;i++){
        if(arr[i]!=mn)
        
        mn2=min(mn2,arr[i]);
    }
    cout<<mn<<endl;
    cout<<mn2;
}