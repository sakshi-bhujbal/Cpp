#include<iostream>
using namespace std;
int main()
{
    int arr[]={3,6,4,6,3};
    int n=sizeof(arr)/4;
     
    int i=0;
    int j=n-1;

    bool flag=true;//palindrome//1
    while(i<j){
        if(arr[i]!=arr[j])
        {flag=false;}//not palindrome//0
        
        else
        {
        flag=true;//palindrome
        }
        i++;
        j--;
    }
    cout<<endl;
    cout<<flag;
    
}