#include<iostream>
using namespace std;
class Friend{
    int data1,data2;
    friend void multiply(Friend);
    public:
        Friend(int d1,int d2){
            data1=d1;
            data2=d2;
        }
        void display(){
            cout<<"data1 = "<<data1<<"\ndata2 = "<<data2;
        }
};

void multiply(Friend obj){
    int mul=obj.data1*obj.data2;
    cout<<"\nMul = "<<mul;
}
int main(){
    Friend f1(12,12);
    f1.display();
    multiply(f1);
    return 0;
}