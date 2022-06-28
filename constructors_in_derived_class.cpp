#include <iostream>
using namespace std;

/*
case 1:
class b : public a{
    order of execution of constructor-->first a() then b()
};

case 2:
class a: public b, public c{
    order of execution of constructor-->b() then c() then a()
};

case 3:
class a : public b, virtual public c{
    order of execution of constructor-->c() then b() then a()
}
*/

class base1
{
    int data1;

public:
    base1(int i)
    {
        data1 = i;
        cout << "Base class constructor called." << endl;
    }
    void printdata1(void)
    {
        cout << "The value of data is " << data1 << endl;
    }
};
class base2
{
    int data2;

public:
    base2(int i)
    {
        data2 = i;
        cout << "Base class constructor called." << endl;
    }
    void printdata2(void)
    {
        cout << "The value of data is " << data2 << endl;
    }
};
class derived : public base1, public base2 //here the order matter
{
    int derived1, derived2;
public:
    derived(int a, int b, int c, int d) : base1(a), base2(b)
    //or : base1(b), base2(a) this order doesnt matter
    {
        derived1 = a;
        derived2 = b;
        cout << "Derived class constructor is called." << endl;
    }
    void printdata3()
    {
        cout << "The value of data derived are " << derived1 << " and " << derived2 << endl;
    }
};

int main()
{
    derived num(10, 20, 30, 40);
    num.printdata1();
    num.printdata2();
    num.printdata3();

    cout << endl;
    return 0;
}