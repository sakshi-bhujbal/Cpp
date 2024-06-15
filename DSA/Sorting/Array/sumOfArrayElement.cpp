#include<iostream>
using namespace std;
sumOfArrayElement(int arr[],int n){
    int sum=0;
    for(int i=0;i<n;i++){
        sum=sum+arr[i];
    }
    cout<<"The sum of array elements is: "<<sum<<endl;
}


int main(){
    int arr[5]={4,9,5,-1,0};
    
    sumOfArrayElement(arr,5);
}