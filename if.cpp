#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"Enter a positive integer: ";
    cin>>x;
    if(x%2==0)
    {
        cout<<"The integer is even";
    }
    else{
        cout<<"The integer is odd";
    }
}