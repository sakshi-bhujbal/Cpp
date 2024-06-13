// #include<iostream>
// using namespace std;
// int main(){
//     int i,j;
//     int m;
//     cout<<"Enter the value of m: ";
//     cin>>m;
    
//     for(i=1;i<=4;i++){
//         for(j=1;j<=i;j++)
//         {
//             cout<<(char)(j+64);
//         }
//         cout<<endl;
//     }
// }


// #include<iostream>
// using namespace std;
// int main(){
//     int i,j;
//     int m;
//     cout<<"Enter the value of m: ";
//     cin>>m;
    
//     for(i=1;i<=m;i++){
//         int n=i;
//         for(j=1;j<=i;j++)
//         {
//             cout<<(char)(n+64);
//             n++;
//         }
//         cout<<endl;
//     }
// }

#include<iostream>
using namespace std;
int main(){
    int i,j;
    int m;
    cout<<"Enter the value of m: ";
    cin>>m;
    int count=1;
    for(i=1;i<=m;i++){
        for(j=1;j<=i;j++)
        {
            cout<<(char)((count+64)+m-i);
            
        }
        cout<<endl;
    }
}