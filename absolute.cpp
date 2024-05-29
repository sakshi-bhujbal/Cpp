#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"Enter a positive integer : ";
    cin>>x;
    if(x>0){
        cout<<"The absolute value of "<<x<<" is "<<x;
    }
    else{
        cout<<"The absolute value of "<<x<<" is "<<-x;//negating to get abs value of negative number
    }
}