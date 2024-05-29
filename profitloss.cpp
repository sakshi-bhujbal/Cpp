#include<iostream>
using namespace std;
int main(){
    int sp,cp;
    cout<<"Enter a selling price : "<<endl;
      cin>>sp;
    cout<<"Enter a cost price : "<<endl;
  
    cin>>cp;
    if(sp>cp){
        cout<<"profit is of rupees "<<sp-cp;

    }
    else if(sp<cp){
    cout<<"Loss is of rupees "<<cp-sp;
    }
    else{
    cout<<"NO profit No loss";
}}
