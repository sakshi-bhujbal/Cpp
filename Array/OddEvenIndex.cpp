#include<iostream>
using namespace std;
int main(){
    int arr[]={1,5,8,4,9};//output{11,10,18,8,19}
    cout<<"The array elements before operations are: "<<endl;
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<"The array elements after operations are: "<<endl;
    for(int i=0;i<5;i++){
        if(i%2!=0){
            arr[i]*=2;
            
        }
        else
            arr[i]+=10;
        
    cout<<arr[i]<<" ";
    }
    
}
