#include<iostream>
using namespace std;

int main()
{
    int a, b;
    cout<<"Enter in a : ";
    cin>>a;
    cout<<"Enter in b : ";
    cin>>b;

    // Arithmetic operators
    cout<<"Value of a+b = "<<(a+b)<<endl;
    cout<<"Value of a-b = "<<(a-b)<<endl;
    cout<<"Value of a*b = "<<(a*b)<<endl;
    cout<<"Value of a/b = "<<(a/b)<<endl;
    cout<<"Value of a%b = "<<(a%b)<<endl;
    // modular division is not valid for double and float. Try changing the data type of a and b, it will give an error.

    cout<<"Value of a++ = "<<(a++)<<endl;
    /* this will first print the value of a and then increment it. Here, the value will you entered will be printed. 
    Because the value you entered is the current value of a, and since the value is to be printed first therefore entered value will be printed.*/

    cout<<"Value of ++a = "<<(++a)<<endl;
    // this will first increment the value of a and then print it. Here, 2 more than the entered value will be printed because current value of a is the 1 more than the entered because of the inrementation by a++, and since ++a will first increment the value, therefore 2 more than the enterede value.

    cout<<"Value of a-- = "<<(a--)<<endl; // --> this will print 2 more than the entered value, and it decrement the value.

    cout<<"Value of --a = "<<(--a)<<endl; // --> this will decrement the value and then print it, therefore it will print the entered value.

    // Assignment Operators
    int aux = a;

    a = b;
    cout<<"Value of a after a=b  : "<<a<<endl; a=aux;
    a += b;
    cout<<"Value of a after a+=b : "<<a<<endl; a=aux; 
    a -= b;
    cout<<"Value of a after a-=b : "<<a<<endl; a=aux;
    a *= b;
    cout<<"Value of a after a*=b : "<<a<<endl; a=aux;
    a /= b;
    cout<<"Value of a after a/=b : "<<a<<endl; a=aux;

    // Comparision Operators -- use parenthesis with them.
    cout<<"Value of a==b is : "<<(a==b)<<endl;
    cout<<"Value of a!=b is : "<<(a!=b)<<endl;
    cout<<"Value of a<=b is : "<<(a<=b)<<endl;
    cout<<"Value of a>=b is : "<<(a>=b)<<endl;
    cout<<"Value of a>b is  : "<<(a>b)<<endl;
    cout<<"Value of a<b is  : "<<(a<b)<<endl;

    // Logical Operaotors - &&, || and !
    cout<<"Value of (a<b)&&(a=b) is  : "<<((a<b)&&(a=b))<<endl;
    cout<<"Value of (a<b)||(a=b) is  : "<<((a<b)||(a=b))<<endl;
    cout<<"Value of !(a==b) is : "<<!(a==b)<<endl;
    
    cout<<endl;
    return 0;
}