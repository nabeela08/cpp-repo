#include<iostream>
using namespace std;

class base1
{
    public:
    void greet()
    {
        cout<<"How you doin'?"<<endl;
    }
};
class base2
{
    public:
    void greet()
    {
        cout<<"Kya haal chaal?"<<endl;
    }
};

class derived : public base1, public base2
{
    int a;
};

int main()
{
    cout<<endl;

    base1 obj1;
    base2 obj2;

    obj1.greet();
    obj2.greet();

    derived obj3;
    // obj3.greet();  this is ambiguity. 

    /* both the greet methods has same method names, and since derived class
    is derived from both the base1 and base2 then which of the greet() would be 
    invoked here.*/
    // throws an error.
    
    cout<<endl;
    return 0;
}