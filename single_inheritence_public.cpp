#include <iostream>
using namespace std;

class base
{
    int data1; // private by default and it is not inheritable
public:
    int data2;
    void setdata();
    int getdata1();
    int getdata2();
};

void base :: setdata(void){
    data1 = 10;
    data2 = 20;
}
int base :: getdata1(){
    return data1;
}
int base :: getdata2(){
    return data2;
}

class derived : public base
{
    int data3;
    public:
    void process();
    void display();
};
// since data1 is a private member of base class therefore it can't be inherited.
// to use that we can define a method in the public section of base class that will return data1
// Thus, by calling this function in derived class we can indirectly access the private member of the base class from derived class.
void derived :: process(){
    data3 = data2 * getdata1();
}
void derived :: display(){
    cout<<"Value of data 1 is "<<getdata1()<<endl;
    cout<<"Value of data 2 is "<<data2<<endl;
    cout<<"Value of data 3 is "<<data3<<endl;
}

int main()
{
    derived der;
    der.setdata();
    der.process();
    der.display();

    cout << endl;
    return 0;
}