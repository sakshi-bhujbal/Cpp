// #include<iostream>
// using namespace std;
// int main(){
//     int i,j;
//     int m;
//     cout<<"Enter the value of m: ";
//     cin>>m;
    
//     for(i=1;i<=m;i++){
//         for(j=1;j<=m;j++)
//         {
//             cout<<m-j+1<<" ";
//         }
//         cout<<endl;
//     }
// }

// 

#include<iostream>
using namespace std;
int main(){
    int n=1;
    int m;
    cout<<"Enter the value of m: ";
    cin>>m;
    
    for(int i=1;i<=m;i++){
        for(int j=1;j<=i;j++)
        {
            cout<<i;
            
        }
        cout<<endl;
    }
}