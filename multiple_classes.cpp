#include<iostream>
using namespace std;

class base1{
    protected:
    int base1int;
    public:
    void set_base1int(int a){
        base1int = a;
    }
};

class base2{
    protected:
    int base2int;
    public:
    void set_base2int(int a){
        base2int = a;
    }
};

class base3{
    protected:
    int base3int;
    public:
    void set_base3int(int a){
        base3int = a;
    }
};

/* syntax for inheriting in multiple inheritance
class derived : visibility-mode base1, visibility-mode base2{
    class body of class "derived"
}*/
class derived : public base1, public base2, public base3{
    public:
    void show(){
        cout<<"The value of base1 is "<<base1int<<endl;
        cout<<"The value of base2 is "<<base2int<<endl;
        cout<<"The value of base3 is "<<base3int<<endl;
        cout<<"The sum of these values is "<<base1int+base2int+base3int<<endl;
    }
};

int main()
{
    derived num;
    num.set_base1int(25);
    num.set_base2int(5);
    num.set_base3int(10);
    num.show();

    cout<<endl;
    return 0;
}