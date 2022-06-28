#include <iostream>
using namespace std;

class complex
{
    int a, b;

public:
    void printData()
    {
        cout << "The value of complex number is : " << a << " + " << b <<"i"<< endl;
    }
    complex(int, int); // constructor prototype
};

complex ::complex(int x, int y) // this is a parameterized constructor with two parameters
{
    a = x;
    b = y;
}

int main()
{
    // implicit call
    complex a(2, 5);
    a.printData();

    // explicit call
    complex b = complex(3, 4);
    b.printData();

    cout << endl;
    return 0;
}