#include<iostream>
using namespace std;
int main(){
    int arr[]={5,0,2,0,0,3,4,0,1};
    int n= sizeof(arr)/4;
    cout<<"The size is: "<<n<<endl;
    
    cout<<"The array elements before sorting are: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    for(int i=0;i<n-1;i++){//Passes
    bool flag=true;  //Array is sorted already assume
        for(int j=0;j<n-1-i;j++){//comparison
            if(arr[j]==0){
                swap(arr[j],arr[j+1]);
                flag = false; // array is not sorted
            }
        }
        if(flag == true) break; // if after pass there is no need to sort then break
    }
    cout<<"The array elements after swapping are: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}