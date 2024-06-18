#include<iostream>
#include<string>
using namespace std;


class Teacher{ //class
  public:           //access specifier
    string name;       //properties/attributes
    string dept;
    string subject;
    double salary;

    void changeDept(string newDept){        //method/member function
        dept = newDept;
    }
};
int main(){
    Teacher t1; //object
    t1.name="Sakshi";       //accessing objects
    t1.dept="Computer science";
    t1.salary=25000;

    cout<<t1.name<<endl;
}