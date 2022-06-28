#include<iostream>
using namespace std;

void swap(int , int );
// {
    // int temp = a;
    // a = b;
    // b = temp;
// }

int main()
{
    int a=4, b=5;
    cout<<"The value of a is "<<a<<" and the value of b is "<<b<<endl;
    swap(a,b);
    cout<<"The value of a is "<<a<<" and the value of b is "<<b<<endl;
    //original values of a and b will not change by this.

    cout<<endl;
    return 0;
}

void swap(int a, int b){
    int temp;
    temp = a;
    a = b;
    b = temp;
    cout<<"The value of a is "<<a<<" and the value of b is "<<b<<endl;
}
