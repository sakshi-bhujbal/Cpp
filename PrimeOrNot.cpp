#include<iostream>
using namespace std;

void checkPrime(int num){
    bool flag=true; //prime

    for(int i=2;i<num/2;i++){
        if(num%i==0)
            flag=false;
            break;
    }

    if(flag){
        cout<<"The number "<<num<<" is a prime number";
    }
    else{
        cout<<"The number "<<num<<" is not a prime number";
    }
}


int main(){
    int num;
    cout<<"Enter the value of num to check prime or not: "<<endl;
    cin>>num;

    checkPrime(num);

    return 0;
}