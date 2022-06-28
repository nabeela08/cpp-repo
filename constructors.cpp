#include <iostream>
using namespace std;

class complex
{
    int a, b;

public:
    // creating a constructor- its a special member function with same name as of class and is used to initialize the objects of class.
    complex(void);

    void printNum()
    {
        cout << "The value of complex number is : " << a << " + " << b << "i" << endl;
    }
};

complex ::complex(void) //this is a default constructor
{
    a = 25;
    b = 8;
}

int main()
{
    cout << endl;

    complex c;
    c.printNum();

    // from the output it is clear that, complex function has been executed without being invoked.
    // this become possible because that function has the same name as that of class. Therefore, while declaraing the objects, this function gets automatically invoked.

    cout << endl;
    return 0;
}

