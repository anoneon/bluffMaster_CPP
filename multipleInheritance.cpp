#include<iostream>
using namespace std;

class A{
    protected:
        int a;
    public:
        A(){
            a=10;
        }
};

class B:virtual public A{           // use of virtual class for resolving ambuguity of A
    protected:
        int b;
    public:
        B(){
            b=20;
        }
};

class C:virtual public A{           // use of virtual class for resolving ambuguity of A
    protected:
        int c;
    public:
        C(){
            c=20;
        }
};

class D:public B,public C{      // Multiple inheritence applied here
    int d;
    public:
        D(){
            d=a+b+c;
        }
        void print(){
            cout<<d;
        }
};

int main(){
    D obj;
    obj.print();
}