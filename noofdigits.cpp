#include<iostream>
using namespace std;
int main(){
    int count=0;
    int n=2345;
    while(n>0){
        n=n/10;
        count++;
    }
    cout<<count;
}