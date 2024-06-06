#include<iostream>
using namespace std;
int main(){
    int arr[3][3]={{1,2,3},{4,5,6},{43,12,19}};
    int mx=INT_MIN;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
         mx=max(mx,arr[i][j]);
        }
    }
    cout<<mx;
}