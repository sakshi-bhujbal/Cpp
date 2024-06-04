#include<iostream>
using namespace std;
int main(){
    int arr[]={2,5,74,9,-1};
    int mn=INT_MAX;
    cout<<"The array elements are: ";
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
        
    }
    cout<<endl;
    for(int i=1;i<5;i++){
        if(arr[i]<mn){
            mn=arr[i];
        }
       // mn= min(mn,arr[i]);
        
    }
    cout<<"The minimum element is: "<<mn;
    
}