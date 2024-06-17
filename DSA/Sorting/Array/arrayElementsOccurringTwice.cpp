#include<iostream>
using namespace std;

void twice(int arr[],int size){
    cout<<"The number occurred twice is: ";
    for(int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){
            if(arr[i]==arr[j]){
                cout<< arr[i]<<" ";//number occurred twice
            }
        }
    }
}

int main(){
int arr[]={4,3,2,7,8,2};
int size=sizeof(arr)/sizeof(4);
twice(arr,size);

}