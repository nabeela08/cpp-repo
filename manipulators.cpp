#include<iostream>
#include<iomanip> // setw() is present in iomanip
using namespace std;

int main()
{
    cout<<endl;

    // endl is a manipulator
    int a =3 , b=445, c=1234;

    // setw(x) is a mnipulator form iomanip file.
    // this manipulator sets the value mentioned after it into the x spaces and keeps it right aligned.

    cout<<"Values of the variable without setw().\n"<<endl;
    cout<<"a : "<<a<<endl;
    cout<<"b : "<<b<<endl;
    cout<<"c : "<<c<<endl;

    cout<<"\nValues of the variable with setw().\n"<<endl;
    cout<<"a : "<<setw(4)<<a<<endl; //it takes width of 4 then.
    cout<<"b : "<<setw(4)<<b<<endl;
    cout<<"c : "<<setw(4)<<c<<endl;
      
    cout<<endl;
    return 0;
}