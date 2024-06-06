#include<iostream>                                        //(1)  2  3
using namespace std;                                      //4  5  6      
int main(){                                              // 43 (12) 19   ==1+2+4+5+43+12==67
    int arr[3][3]={{1,2,3},{4,5,6},{43,12,19}};
    int l1=1,r1=1;
    int l2=3,r2=2;
    int sum=0;
    for(int i=0;i<3;i++){
        for(int j=0;j<2;j++){
         sum+= arr[i][j];
        }
    }
    cout<<sum;
}