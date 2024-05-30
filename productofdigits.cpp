#include<iostream>
using namespace std;
int main(){
    int product=1;
    int n=12345;
    while(n!=0){
        int ld=n%10;
        
        product*=ld;

        n=n/10;
        
    }
    cout<<product;
}
