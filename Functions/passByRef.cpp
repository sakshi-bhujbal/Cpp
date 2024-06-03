#include<iostream>
using namespace std;
int swap(int& x,int& y){//pass by reference
    int temp=x;
    x=y;
    y=temp;
}
int main(){
    int x=5,y=8;
    cout<<x<<" "<<y<<endl;
    swap(x,y);
    cout<<x<<" "<<y;
}