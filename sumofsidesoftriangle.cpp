#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"Enter the sides of triangle: ";
    cin>>a;
    cin>>b;
    cin>>c;
    if(a+b>c && b+c>a && c+a>b)
    {
        cout<<a<<","<<b<<","<<c<<" are the sides of triangle";
    }
    else{
        cout<<"are not the sides of triangle";
    }
}