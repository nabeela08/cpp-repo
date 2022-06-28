#include<iostream>
using namespace std;

class number{
    int a;
    public:
    number(){
        a = 0;
    }
    number(int num){
        a = num;
    }
    number(number &obj){ //this is copy constructor
        cout<<"Copy constructer is called."<<endl;;
        a = obj.a;
    }
    void display(){
        cout<<"The number for this object is "<<a<<endl;
    }
};

int main()
{
    number x, y, z(25), z2;
    x.display();
    y.display();
    z.display();
    cout<<endl;
    //if we want to create a copy constructor where z1 should exactly resemble z or x or y
    number z1(x);
    z1.display();
    // z2 = z; copy constructor will not be called in this case
    z2.display();
    number z3 = z; //copy constructor called
    z3.display();
    cout<<endl;
    return 0;
}