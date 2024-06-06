#include<iostream>
using namespace std;
int main(){
    int arr[3][3]={{1,2,3},{4,5,6},{43,12,19}};
    int mn=INT_MAX;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
         mn=min(mn,arr[i][j]);
        }
    }
    cout<<mn;
}