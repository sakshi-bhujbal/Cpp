#include<iostream>
using namespace std;
int main(){
    int arr[]={2,5,8,9,4,1};
    int count=0;
    int x;
    cout<<"Enter the number x: ";
    cin>>x;

    cout<<"The elements greater then x are: ";
    for(int i=0;i<6;i++){
        if(arr[i]>x){
            cout<<arr[i]<<" ";
          count +=1;
        }
    }
    cout<<endl;
    cout<<"The count is: "<<count;
}