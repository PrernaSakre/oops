#include <iostream>
using namespace std;
class complex
{
    int a;
    int b;

public:
    void setdata(int v1, int v2)
    {
        a = v1;
        b = v2;
    }
    void printnumber()
    {
        cout << "complex number is:" << a << "+" << b << "i" << endl;
    }
    void setdatabysum(complex o1, complex o2)
    {
        a = o1.a + o2.a;
        b = o1.b + o2.b;
    }
    void printsum()
    {
        cout << "after addition,complex number is:" << a << "+" << b << "i" << endl;
    }
};
int main()
{
    complex x1, x2, x3;
    x1.setdata(2, 4);
    x1.printnumber();

    x2.setdata(5, 6);
    x2.printnumber();

    x3.setdatabysum(x1, x2);
    x3.printsum();
}