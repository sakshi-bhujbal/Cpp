#include<iostream>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    cout<<s<<endl;
    int n=s.length();//s.size()

    int count=0;
    char vowels;
    for(int i=0;i<n;i++){
        if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u' ){
            count+=1;
            
        }
    }
    cout<<"The count of vowels are:"<<endl;
    cout<<count;

}