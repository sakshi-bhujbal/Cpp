//if number of occurrence of each element is unique then print true else print false
//eg{1,1,1,2,2,4} occurrence of 1=3,2=2,4=1
#include<iostream>
#include<algorithm>
using namespace std;

int numOfOcc(int* arr,int size){
    int count=0;
    sort(arr,arr+size);
    for(int i=0;i<size;i++){
        if(arr[i]==arr[i-1]){
            return arr[i];
           
        }
    }
    return -1;
}

int main(){
    int arr[]={1,1,1,2,2,4};
    int size=sizeof(arr)/sizeof(arr[0]);
    numOfOcc(arr,size);

    int result = numOfOcc(arr,size);

    if(result!=-1){
        cout<<"Duplicate found: "<<result;
    }
    else{
        cout<<"Duplicate not found ";
    }
    return 0;
}