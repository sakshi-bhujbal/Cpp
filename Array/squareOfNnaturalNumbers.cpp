#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    int arr[n];
    
    
    cout<<"Enter array elements : ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"The array elements are: ";
    for(int i=0;i<n;i++){
         cout<<arr[i]<<" ";
    }
    cout<<endl;
     cout<<"The square of array elements are: "<<" ";
    for(int i=0;i<n;i++){
         cout<<arr[i]*arr[i]<<" ";
    }
   
   
}