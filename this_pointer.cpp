#include <iostream>
using namespace std;

class A
{
    int a;
public:
    // void setdata(int a)
    // {
    //     a = a; // a in the argument of setdata() will not get assigned in the private variable a.
    // }
    // this will print a garbage value because as in this case when a=a; getdata() which we print, a is private and no value has been assigned to it yet. Thus, a garbage value will be displayed.

    // A setdata(int a)
    void setdata(int a)
    {
        this->a = a; // this is a keyword which is pointer.
        // this pointer points to the object of the class which invokes the method.
        // return *this;
    }
    void getdata()
    {
        cout << "The value of object is : " << a << endl;
    }
};

int main()
{
    cout << endl;

    A obj;
    obj.setdata(25);
    obj.getdata();

    cout << endl;
    return 0;
}