#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;
    int m;
    cout<<"Enter the value of m: ";
    cin>>m;
    int arr[n][m];

    cout<<"Enter the array elements: ";
    for(int j=0;j<m;j++){
        for(int i=0;i<n;i++){
            cin>>arr[i][j];
        }
    }
       for(int j=0;j<m;j++){
        for(int i=0;i<n;i++){
         cout<<arr[i][j]<<" ";   
        } 
        cout<<endl;
    }
    
}