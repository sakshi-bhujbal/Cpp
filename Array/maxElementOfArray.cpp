#include<iostream>
using namespace std;
int main(){
    int arr[]={2,5,74,9};
    int mx=arr[0];
    cout<<"The array elements are: ";
    for(int i=0;i<4;i++){
        cout<<arr[i]<<endl;
        
    }
    for(int i=1;i<4;i++){
        // if(arr[i]>mx){
        //     mx=arr[i];
        // }
        mx= max(mx,arr[i]);
        
    }
    cout<<"The maximum element is: "<<mx;
    
}