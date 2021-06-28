#include<iostream>
using namespace std;
class Person{
    int age;
    string name,gender;
    public:
        public:
            void getdata(){
                cout<<"enter Name : ";cin>>name;
                cout<<"enter Gender : ";cin>>gender;
                cout<<"enter Age : ";cin>>age;
            }
            void showdata(){
                cout<<"Name : "<<name;
                cout<<"\nGender : "<<gender;
                cout<<"\nAge : "<<age;
            }
};
class Teacher:public Person{        //inheriting common class
    int salary;
    public:
        void getSalary(){
            cout<<"enter Teacher's Salary : ";cin>>salary;
        }
        void showSalary(){
            cout<<"\nSalary : "<<salary;
        }
};
class Student:public Person{        //inheriting common class
    char grade;
    public:
        void getGrade(){
            cout<<"enter student's Grade : ";cin>>grade;
        }
        void showGrade(){
            cout<<"\nGrade : "<<grade;
        }
};
int main(){
    Teacher tObj;
    Student sObj;
    tObj.getdata();
    tObj.getSalary();
    tObj.showdata();
    tObj.showSalary();
    cout<<endl;
    sObj.getdata();
    sObj.getGrade();
    sObj.showdata();
    sObj.showGrade();
}