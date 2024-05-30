#include<iostream>
using namespace std;
int main(){
    int sum=0;
    int n=12345678;
    while(n!=0){
        int ld=n%10;
        if(ld%2==0){
            sum+=ld;
        }
        

        n=n/10;
        
    }
    cout<<sum;
}
