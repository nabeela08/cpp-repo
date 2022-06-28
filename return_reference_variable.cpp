#include<iostream>
using namespace std;

int & swap_ref_var(int &a, int &b); 

int main()
{
    int a=2, b=3;

    cout<<"Values before running swap_ref_var."<<endl;
    cout<<"The value of a : "<<a<<endl;
    cout<<"The value of b : "<<b<<endl;
    swap_ref_var(a,b)=766;
    cout<<"Values after running swap_ref_var."<<endl;
    cout<<"The value of a : "<<a<<endl;
    cout<<"The value of b : "<<b<<endl;
    // original values of a and b be changed.
    // a will change to 766 because reference variable of a is returned, and 766 is assigned to it.
    // any chnange in the value of the reference variable will also change the value of the variable of whose reference variables it is.
    
    cout<<endl;
    return 0;
}

int & swap_ref_var(int &a, int &b){
    int c;
    c = a;
    a = b;
    b = c;
    return a;
}