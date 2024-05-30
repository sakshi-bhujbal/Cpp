#include<iostream>
using namespace std;
int main(){
    char n;
    cout<<"Enter the character  : ";
    cin>>n;

    switch(n){
    case 'M':
    {
    cout<<"Monday";
    break;
    }


    case 'T':
    {
        cout<<"Tuesday";
        break;
    }

    case 'W':
    {
        cout<<"Wednesday";
        break;
    }

    case 't':
    {
        cout<<"Thursday";
        break;
    }

    case 'F':
    {
        cout<<"Friday";
        break;
    }

    case 'S':
    {
        cout<<"Saturday";
        break;
    }

    case 's':
    {
        cout<<"Sunday";
        break;
    }
    default:
    cout<<"Not a valid day";
}
}