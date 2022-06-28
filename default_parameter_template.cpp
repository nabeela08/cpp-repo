#include<iostream>
using namespace std;

template <class T1=string, class T2=float, class T3=char>
class nabs{
    public:
    T1 a;
    T2 b;
    T3 c;
    nabs(T1 x, T2 y, T3 z){
        a = x;
        b = y;
        c = z;
    }
    void display(){
        cout<<"The value of a is "<<a<<endl;
        cout<<"The value of b is "<<b<<endl;
        cout<<"The value of c is "<<c<<endl;
    }
};

int main()
{
    nabs <> obj("NABEELA", 406, 's');
    obj.display(); // here the class from the template will be created using the default arguments of the template.
    cout<<endl;

    nabs<float, char, char> obj2(2.5, 'n', 's');
    obj2.display();

    cout<<endl;
    return 0;
}