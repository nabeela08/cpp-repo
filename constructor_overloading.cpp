#include <iostream>
using namespace std;

class complex
{
    int a, b;

public:
    // double parameterized constructor
    complex(int x, int y)
    {
        a = x;
        b = y;
    }
    // double parameterized constructor.
    complex(int real)
    {
        a = real;
        b = 0;
    }
    // default constructor
    complex()
    {
        a = 0;
        b = 0;
    }

    void printData()
    {
        cout << "The value of complex number is : " << a << " + " <<"i"<< b << endl;
    }
};

int main()
{
    complex c1(2, 5);
    c1.printData();
    complex c2(8);
    c2.printData();
    complex c3;
    c3.printData();

    cout << endl;
    return 0;
}