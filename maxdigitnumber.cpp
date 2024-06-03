#include<iostream>
using namespace std;
int main(){
    int max=0;
    int num=45382;
    while(num>0){
        int rem=num%10;
        if(rem>max){
            max=rem;
        }
        num=num/10;
    }
    cout<<max;
}