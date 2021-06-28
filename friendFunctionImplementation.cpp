#include<iostream>
using namespace std;
class Employee;     // class prototype declaration
class Boss{
    int bossSal;
    friend void totalSalary(Boss,Employee);         //Employee prototype is used here as it is not defined now
    public:
        Boss(){}
        Boss(int d1){
            bossSal=d1;
        }
        void bossdisplay(){
            cout<<"Bosses salary = "<<bossSal;
        }
};
class Employee{                         // Employee is defined now
    int empSal;
    friend void totalSalary(Boss,Employee);
    public:
        Employee(){}
        Employee(int d1){
            empSal=d1;
        }
        void Employeedisplay(){
            cout<<"\nEmployeees salary = "<<empSal;
        }
};
void totalSalary(Boss b,Employee e){        // friend function defined
    int total=b.bossSal+e.empSal;
    cout<<"\nTotal Salary = "<<total;
}
int main(){
    Boss b(40000);
    Employee e(25000);
    b.bossdisplay();
    e.Employeedisplay();
    totalSalary(b,e);
    return 0;
}