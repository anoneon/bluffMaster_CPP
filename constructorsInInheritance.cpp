#include <iostream>
using namespace std;
class A{
    protected:
    int data;
    public:
        A(int d){
            data=d;
        }
};
class B:public A{
    public:
        B(int c):A(c){                  // A constructor called from B
        }
        void display(){
            cout<<"data A : "<<data;
        }
};

int main(){
    B obj(10);
    obj.display();
}