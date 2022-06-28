#include<iostream>
using namespace std;

class baseclass{
    public:
    int var_base = 100;
    virtual void display(){
        cout<<"Displaying Base Class1 variable: "<<var_base<<endl;
    }
};

class deriveclass : public baseclass{
    public:
    int var_derive = 200;
    void display(){
        cout<<"Displaying Base Class2 variable: "<<var_base<<endl;
        cout<<"Displaying Derive Class variable: "<<var_derive<<endl;
    }
};

int main()
{
    baseclass * base_class_pointer;
    baseclass obj_base;
    deriveclass obj_derived;

    base_class_pointer = &obj_derived;
    base_class_pointer->display();

    cout<<endl;
    return 0;
}