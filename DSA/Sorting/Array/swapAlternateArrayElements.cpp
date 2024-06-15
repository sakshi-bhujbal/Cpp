#include<iostream>
using namespace std;

void swapAlternate(int arr[],int size){
    for(int i=0;i<size;i+=2){
        if(i+1<size){
            swap(arr[i],arr[i+1]);
        }
    }
}

void printArray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int arr[6]={9,-1,5,4,11,0};
    int brr[5]={6,5,7,-4,9};

    swapAlternate(arr,6);
    swapAlternate(brr,5);

    printArray(arr,6);
    printArray(brr,5);

    return 0;
}