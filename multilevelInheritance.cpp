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

class C:public B{

};

int main(){
    C obj;              // class C can access A
    obj.setData();
    obj.display();
}