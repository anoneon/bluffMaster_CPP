#include<iostream>
using namespace std;
class Income{
    protected:    
        int income;
    public:
        public:
            void getIncome(){
                cout<<"enter Income : ";cin>>income;   
            }
};
class IncomeTax:public Income{        //inheriting common class
    protected:    
        int incomeTax;
    public:
        void calculateIncomeTax(){
            incomeTax=0.1*income;
        }
};
class CarTax{        
    protected:
        int carTax;
    public:
        void getCarTax(int a){
            carTax=a;
        }
};
class TotalTax:public IncomeTax,public CarTax{
    int totalTax;
    public:
        void showTotalTax(){
            totalTax=incomeTax+carTax;
            cout<<"\nTotal Tax : "<<totalTax;
        }
};
int main(){
    TotalTax obj;
    obj.getIncome();
    obj.calculateIncomeTax();
    obj.getCarTax(20);
    obj.showTotalTax();
}