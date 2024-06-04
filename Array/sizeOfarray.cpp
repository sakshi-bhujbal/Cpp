#include<iostream>
using namespace std;
int main(){
    int arr[]={2,5,7,9,3};
    //int n=sizeof(arr);//16 because 1 int takes four bytes so 4 elements will take 16 bytes
    int n=sizeof(arr)/4;//4
    cout<<n<<endl;
    int sum=0;
    cout<<"The array elements are: ";
    for(int i=0;i<5;i++){
        cout<<arr[i]<<endl;
        sum += arr[i];
    }
    cout<<"The sum of array elements is: "<<sum;
}
