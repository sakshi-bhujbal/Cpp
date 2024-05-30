#include<iostream>
using namespace std;
int main(){
    int reverse=0;
    int n=24356;
    while(n!=0){
        int ld=n%10;
        reverse=reverse*10 + ld;
        n=n/10;
        
    }
    cout<<reverse;
}
