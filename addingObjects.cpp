#include <iostream>
using namespace std;

class Complex
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
    Complex add(Complex z)      // adding objects method defined here
    {
        Complex tmp;
        tmp.x = x + z.x;
        tmp.y = y + z.y;
        return tmp;
    }
};

void Complex::showdata()
{
    cout << x << " " << y;
}
int main()
{
    Complex c1, c2, c3;
    c1.getdata(5, 10);
    c2.getdata(25, 15);
    c3 = c1.add(c2);    // adding objects method used here
    c3.showdata();
}