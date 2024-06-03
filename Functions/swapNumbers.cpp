#include<iostream>
using namespace std;
int main(){
    int x=5,y=8;
    cout<<x<<" "<<y<<endl;
    int temp;
    temp=x;
    x=y;
    y=temp;
    cout<<x<<" "<<y;
}