#include <iostream>
using namespace std;

class complex; // forward declaration- this is a declaration to a class as we do in function to tell the compiler that this class is defined later in the program.

class calculator
{
public:
    int add(int a, int b)
    {
        return (a + b);
    }
    int sumRealComplex(complex, complex);
    int sumcompComplex(complex, complex);
};

class complex
{
    int a, b;
    // here we make methods of different class a friend of current class. Also if we define it before calculator class then it will give an error because then we would use calculator class before defining it.
    friend int calculator ::sumRealComplex(complex num1, complex num2);
    friend int calculator ::sumcompComplex(complex, complex);

    // friend calculator; we can also make the whole class as a friend.

public:
    void setNum(int n1, int n2)
    {
        a = n1;
        b = n2;
    }

    void printNum()
    {
         if (b > 0)
            cout << "The value of complex number is : " << a << " + i" << b << endl;
        else if (b < 0)
            cout << "The value of complex number is : " << a << " - i" << (-b) << endl;
        else
            cout << "The value of complex number is : " << a << endl;
    }
    friend complex sumComplex(complex, complex);
};

complex sumComplex(complex num1, complex num2) // that user-defined function definition
{
    complex res;
    res.setNum((num1.a + num2.a), (num1.b + num2.b));
    return res;
}

int calculator ::sumRealComplex(complex o1, complex o2)
{
    return (o1.a + o2.a);
}

int calculator ::sumcompComplex(complex o1, complex o2)
{
    return (o1.b + o2.b);
}

int main()
{
    complex c1, c2;
    c1.setNum(1, 4);
    c1.printNum();
    c2.setNum(5, 7);
    c2.printNum();

    calculator cal;
    int res = cal.sumRealComplex(c1, c2);
    cout << "Sum of real part of the entered complex numbers is : " << res << endl;
    res = cal.sumcompComplex(c1, c2);
    cout << "Sum of complex part of the entered complex numbers is : " << res << endl;

    cout << endl;
    return 0;
}