#include<iostream>
using namespace std;
int main(){
    int ageR,ageS,ageA;
    cout<<"Enter Ram's age: ";
    cin>>ageR;
    cout<<"Enter Shyam's age: ";
    cin>>ageS;
    cout<<"Enter Ajay's age: ";
    cin>>ageA;  

    cout<<"Ram's ahe is: "<<ageR<<endl; 
    cout<<"Shyam's ahe is: "<<ageS<<endl;
    cout<< "Ajays's ahe is: "<<ageA<<endl; 

    if(ageR<ageS)//Shyam can never be youngest
    {
        if(ageR<ageA){
            cout<<"Ram is youngest";
        }
        else{
            cout<<"Ajay is Youngest";
        }
    } 
    else//Shyam is youngest
    {
        if(ageS<ageA)//Ram can not be youngest
        {
            cout<<"Shyam is youngest";
        }
        else{
            cout<<"Ajay is youngest";
        }
    }
}