#include<iostream>
using namespace std;
int main(){
    int i,j;
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;
    
    for(i=1;i<=n;i++){
        for(j=1;j<=n-i;j++){
            cout<<"  ";
        }
        for(int k=1;k<=2*i-1;k++){
            cout<<"* ";
        }
         cout<<endl;
    }

    for(i=n-1;i>=1;i--){
        for(j=1;j<=n-i;j++){
            cout<<"  ";
        }
        for(int k=1;k<=2*i-1;k++){
            cout<<"* ";
        }
         cout<<endl;
    }
   
}