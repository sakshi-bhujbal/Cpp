//for ODD Array size
#include<iostream>
using namespace std;

void unique(int arr[],int size){
    int ans=0;
    for(int i=0;i<size;i++)
        ans= ans^arr[i];
        cout<<ans;
    return ;
}


int main(){
    int arr[7]={1,4,1,2,4,2,9};

    unique(arr,7);
}