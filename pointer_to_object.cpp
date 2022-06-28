#include<iostream>
using namespace std;

class complex{
    int real, imaginary;
    public:
    void setdata(int r, int i){
        real = r;
        imaginary = i;
    }
    void getdata(){
        cout<<"The real part is "<<real<<endl;
        cout<<"The imaginary part is "<<imaginary<<endl;
    }

};

int main()
{
    complex c1;
    // c1.setdata(3, 5);
    // c1.getdata();

    complex *ptr = &c1;
    (*ptr).setdata(2, 5);
    // (*ptr).getdata(); is exactly same as
    ptr->getdata();

    //we can also create an object of complex class using new keyword
    complex *ptr2 = new complex;
    ptr2->setdata(10, 20);
    ptr2->getdata();


    cout<<endl;
    return 0;
}