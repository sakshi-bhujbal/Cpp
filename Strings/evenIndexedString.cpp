#include<iostream>
using namespace std;
int main(){
    string s="My Name is Sakshi";//ayanama asasakaha
    cout<<endl;
    int n=s.length();//s.size()

    for(int i=0;i<n;i++){
        if(i%2==0){
            s[i]='a';
        }
    }
    cout<<s;
}