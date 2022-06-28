#include<iostream>
using namespace std;

class simple
{
    int data1;
    int data2;
    public:

        simple( int a, int b=9) //we can give a default value
        {
            data1 = a;
            data2 = b;
        }
        void printdata()
        {
            cout<<"The value of data1 is "<<data1<<endl;
            cout<<"The value of data2 is "<<data2<<endl;
        }
};

int main()
{
    simple o1(2), o2(5, 8);

    // simple o3; // this will give an error!
    // in case of parameterized constructor we cannot declare just an object.
    // we have to pass the necessary arguments to the constructor as defined in its definition.

    o1.printdata();
    o2.printdata();
    
    cout<<endl;
    return 0;
}



