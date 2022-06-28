#include <iostream>
using namespace std;

class base
{
protected: // kinda private which can be inherited
    int a=10;
private:
    int b=20;
};

class derived : protected base{
};

int main()
{
    base b;
    derived d;
    // cout<<b.a<<endl;    
    // cout<<d.a<<endl;   
    //throw error as a is protected in both base as well as derived class.

    cout << endl;
    return 0;
}
