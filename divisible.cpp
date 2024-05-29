#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"Enter some positive integer: ";
    cin>>x;
    cout<<"You entered "<<x<<"  as the input number"<<endl;
    if(x % 5==0){
        cout<<"The number "<<x<<" is divisible by 5"<<endl;
    }
    else{
        cout<<"The number "<<x<<" is not divisible by 5"<<endl;
    }
}