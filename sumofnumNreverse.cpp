#include<iostream>
using namespace std;
int main(){
    int reverse=0;
    int On=24356;
    int n=On;
    while(n!=0){
        int ld=n%10;
        reverse=reverse*10 + ld;
        n=n/10;
        
    }
    cout<<"reverse number is: "<<reverse<<endl;
    int sum=On+reverse;
    cout<<"sum =="<<sum;
}
