#include<iostream>
using namespace std;

int sum(int n){
    // int sum=0;
    // for(int i=0;i<=n;i++){
    //     sum+=i;
    // }
    // return sum;

    if(n==1) return 1;
    return n+sum(n-1);
}


int main(){
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;
    int result=sum(n);
    cout<<"The sum of 1 to "<<n<<" is : "<<result;
}