#include<iostream>
using namespace std;
int main(){
    int arr[]={67,87,98,34,21};
    int n=sizeof(arr)/4;

    int b[n];
    for(int i=0;i<n;i++){
        b[i]=arr[n-1-i];
        
        cout<<b[i]<<" ";
    }
}