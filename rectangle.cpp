#include<iostream>
using namespace std;
int main(){
    float length=12.7,breadth=6.2;
    float area = length*breadth;
    cout<<"The area of rectangle is: "<<area<<endl;
    float perimeter = 2*(length+breadth);
    cout<<"The perimeter of rectangle is: "<<perimeter<<endl;

    if(area>perimeter){
        cout<<"The area of rectangle is greater than it's perimeter";
    }
    else{
        cout<<"The area of rectangle is not greater than it's perimeter";
    }
}