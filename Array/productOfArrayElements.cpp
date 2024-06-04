#include<iostream>
using namespace std;
int main(){
    int arr[]={2,5,7,9};
    int product=1;
    cout<<"The array elements are: ";
    for(int i=0;i<4;i++){
        cout<<arr[i]<<endl;
        product *= arr[i];
    }
    cout<<"The sum of array elements is: "<<product;
}