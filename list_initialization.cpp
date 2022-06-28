#include <iostream>
using namespace std;

/*
syntax for initializing list in constructor:
constructor(argument-list): initialization-section
{
    assignment + other code;
}
*/

class test
{
    int a, b;

public:
    test(int i, int j) : a(i), b(j)
    {
        // test(int i, int j): a(i), b(j+2)
        // test(int i, int j): a(i), b(j+a)
        // all variants are legal declaration. we can use a in argument of b as a has been inintialised first.
        // test(int i, int j): a(b), b(j)
        // this is also legal but it will print garbage value for a as b has not been initialised yet.
        cout << "Constructor executed." << endl;
        cout << "Value of a is " << a << endl;
        cout << "Value of b is " << b << endl;
    }
};

int main()
{
    cout << endl;
    test t(2, 5);

    cout << endl;
    return 0;
}