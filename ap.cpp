//ap=a+(n-1)d where a is first,n is number of terms,and d is the difference
//for AP=1,3,5,7,9.....(Arithmetic progression)
/*a=1 , n=will be entered by user , d=2 
1+(n-1)2   4+(n-1)3
1+2n-2      4+3n-3
2n-1        3n+1

*/

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;
//     for(int i=1;i<=2*n-1;i+=2){
//         cout<<i<<endl;
//     }

// for(int i=4;i<=3*n+1;i+=3){
//         cout<<i<<endl;
//     }

int a=4;
for(int i=1;i<=n;i++){
    cout<<a<<" ";
    a=a+3;
}

}