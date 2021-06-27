#include <iostream>
using namespace std;
class Negative{
    private:
        int num;
    public:
        void getdata(int n){
            num=n;
        }
        int operator -(){
            return -num;
        }
};

int main(){
    Negative obj;
    obj.getdata(20);
    // int n = -obj;
    cout<<-obj;
}