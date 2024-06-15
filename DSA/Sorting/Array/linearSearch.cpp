#include<iostream>
using namespace std;
linearSearch(int arr[],int n,int key){
    
    for(int i=0;i<n;i++){
       if(arr[i]==key){
        return 1;
       }
       
    }
    return 0;
}


int main(){
    int arr[8]={41,9,5,-1,0,12,45,-18};
    
    cout<<"Enter the element to be searched: "<<endl;
    int key;
    cin>>key;
    linearSearch(arr,8,key);

    bool found= linearSearch(arr,8,key);

    if(found){
        cout<<"The key "<<key<<" is present in the array "<<endl;
    }
    else{
        cout<<"The key "<<key<<" is not present in the array";
    }
}