#include <iostream>
using namespace std;
class A{
    int data;
    public:
        void setData(){
            cout<<"enter a num : ";
            cin>>data;
        }
        void display(){
            cout<<data;
        }
};
class B:public A{

};

int main(){
    B obj;
    obj.setData();
    obj.display();
}