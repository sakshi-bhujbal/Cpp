// #include<iostream>
// using namespace std;
// int main(){
//     int m;
//     cout<<"Enter the value of m: ";
//     cin>>m;
    
//     for(int i=1;i<=m;i++){
        
//         for(int j=1;j<=m;j++)
//         {
//             cout<<(char)(i+64);
            
//         }
//         cout<<endl;
//     }
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int m;
//     cout<<"Enter the value of m: ";
//     cin>>m;
//     int count=1;
//     for(int i=1;i<=m;i++){
        
//         for(int j=1;j<=m;j++)
//         {
//             cout<<(char)(count+64);
//             count++;
//         }
//         cout<<endl;
//     }
// }

#include<iostream>
using namespace std;
int main(){
    int m;
    cout<<"Enter the value of m: ";
    cin>>m;
    
    for(int i=1;i<=m;i++){
        int n=i;
        for(int j=1;j<=m;j++)
        {
            cout<<(char)(n+64);
            n++;
            
        }
        cout<<endl;
    }
}