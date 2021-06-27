#include <iostream>
using namespace std;

class Multiply
{
private:
    int x;
    int y;

public:
    void getdata(int a, int b)
    {
        x = a;
        y = b;
    }
    void showdata();
    Multiply operator *(Multiply z) // multiply operator overloading define here
    {
        Multiply tmp;
        tmp.x = x * z.x;
        tmp.y = y * z.y;
        return tmp;
    }
};

void Multiply::showdata()
{
    cout << x << " " << y;
}
int main()
{
    Multiply c1, c2, c3;
    c1.getdata(5, 10);
    c2.getdata(25, 15);
    // c3=c1.operator*(c2); this is same as below one
    c3 = c1*c2;     //operator overloaded
    c3.showdata();
}