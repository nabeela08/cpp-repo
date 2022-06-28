#include <iostream>
using namespace std;

class complex
{
    int a;
    int b;

public:
    complex(void); //constructor declaration

    void printData()
    {
        cout << "The value of complex number is : " << a << " + " << b<<"i"<< endl;
    }
};

complex ::complex(void)
{
    a = 10;
    b = 5;
}

int main()
{
    complex a;
    a.printData();

    cout << endl;
    return 0;
}