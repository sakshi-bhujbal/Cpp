#include<iostream>
#include<string>
using namespace std;


class Teacher{ //class
private:
        double salary;
  public:           //access specifier
    string name;       //properties/attributes
    string dept;
    string subject;
    
    // public:
    //     Teacher(){                      //non-parameterised constructor
    //         cout<<"Hi I am constructor"<<endl;
    //     }

    Teacher(string n,string d,string s,double sal){                      //parameterised constructor
            name=n;
            dept=d;
            subject=s;
            salary=sal;
        }

    void changeDept(string newDept){        //method/member function
        dept = newDept;
    }
    void setSalary(double s){
        salary=s;
    }

    double getSalary(){
        return salary;
    }

    // void getInfo(){
    //     cout<<"name : "<<name<<endl;
    //     cout<<"subject: "<<subject<<endl;
    // }
    
};
int main(){
    Teacher t1("Sakshi","CS","C++",25000); //object
    // t1.name="Sakshi";       //accessing objects
    // t1.dept="Computer science";
    // t1.setSalary(25000);

    // t1.getInfo();
    cout<<t1.name<<endl;
    cout<<t1.getSalary();
}