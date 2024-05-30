#include<iostream>
using namespace std;
int main(){
    float percentage;
    cout<<"Enter the percentage of student : ";
    cin>>percentage;

    if(percentage>=81 && percentage<=100){
        cout<<"Grade A";

    }
    else if(percentage>=61 && percentage<=80){
        cout<<"Grade B";

    }
    else if(percentage>=41 && percentage<=60){
        cout<<"Grade C";
    }
    else{
        cout<<"Fail";
    }

}