#include<iostream>
using namespace std;
class Palindrome{
    int num;
    public:
        int check(int n){
            int tmp=n,rem,rev=0;
            while(tmp>0){
                rem = tmp % 10;
                rev = rev * 10 + rem;
                tmp/=10;
            }
            if(rev==n) return 1;
            else return 0;
        }
        void checkPalindrome(){
            cout<<"enter num : ";
            cin>>num;
            check(num)==1?cout<<"Palindrome":cout<<"Not Palindrome";
        }
};

int main(){
    Palindrome obj;
    obj.checkPalindrome();
}