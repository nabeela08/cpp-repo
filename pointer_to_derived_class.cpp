#include<iostream>
using namespace std;

class baseclass{
    public:
    int var_base;
    void display(){
        cout<<"Displaying Base Class variable: "<<var_base<<endl;
    }
};

class deriveclass : public baseclass{
    public:
    int var_derive;
    void display(){
        cout<<"Displaying Derive Class variable: "<<var_derive<<endl;
    }
};

int main()
{
    baseclass *base_class_pointer;
    baseclass obj_base;
    deriveclass obj_derive;
    base_class_pointer = &obj_derive; //pointing base class pointer to derived class
    // we can point here but but when we will call the display method, which is present in both the classes, then display() of base class will invoke

    base_class_pointer->var_base = 25;
    // base_class_pointer->var_derive = 25; will throw error because var_derive is not a member of base class
    base_class_pointer->display();

    deriveclass *derived_class_pointer;
    derived_class_pointer = &obj_derive;
    derived_class_pointer->var_derive = 200;
    derived_class_pointer->display();
    cout<<endl;
    return 0;
}