#include<iostream>
using namespace std;

class ConstMember{
    const int max;
    int a;
    public:
        ConstMember():max(21){      //  you can define constant here and it will not give error
          a=10;  
        }
        void show(){
            cout<<a<<max;
        }
};

int main(){

    ConstMember obj;
    obj.show();
    return 0;
}