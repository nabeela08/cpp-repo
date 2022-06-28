//pointer is a data type which holds the address of other data types.

#include<iostream>
using namespace std;

int main(){
    int a=30;
    int* b;
    b = &a;
    //& is address of operator
    //* is deferencing operator
    cout<<"The address of a is "<<&a<<endl;
    cout<<"The address of a is "<<b<<endl;

    cout<<"The value at address b is "<<*b<<endl;

//pointer to pointer
    int** c = &b;
    cout<<"The address of b is "<<&b<<endl;
    cout<<"The address of b is "<<c<<endl;
    cout<<"The value at address c is "<<*c<<endl;
    cout<<"The value at address value_at(value_at(c)) "<<**c<<endl;
    return 0;
}