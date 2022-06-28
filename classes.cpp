#include<iostream>
using namespace std;

class employee{
    //if elements are under private section then only the functions inside that class can access them.
    // that thing can't be accessed form the main function using the object of that class. 
    private:
        int a, b, c;
    //elements under public section can be accessed by anyone.
    public:
        int d, e;
        void setData(int a1, int b1, int c1); //declaration
        //we can also just create the prototype and define them later
        void getData(){ //can also define here
            cout<<"The value of a is "<<a<<endl;
            cout<<"The value of b is "<<b<<endl;
            cout<<"The value of c is "<<c<<endl;
            cout<<"The value of d is "<<d<<endl;
            cout<<"The value of e is "<<e<<endl;
        }
};

void employee :: setData(int a1, int b1, int c1){
    a = a1;
    b = b1;
    c = c1;
}

int main()
{
    employee ella;
    ella.d = 10;
    ella.e = 20;
    //d and e are public so we can access them.

    // ella.a = 30; this will give an error because it's an element of private section

    ella.setData(8, 25, 31);
    ella.getData();

    cout<<endl;
    return 0;
}