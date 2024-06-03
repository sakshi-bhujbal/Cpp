#include<iostream>
using namespace std;

int pow(int a,int b){
    if(b==0 ) return 1;
    return a*pow(a,b-1);
}


int main(){
    int a;
    cout<<"Enter the value of a: ";
    cin>>a;
    int b;
    cout<<"Enter the value of b: ";
    cin>>b;
    int result=pow(a,b);
    cout<<"The power of "<<a<<" to "<<b<<" is : "<<result;
}