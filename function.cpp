#include<iostream>
using namespace std;

int sum(int a, int b); // this is the function prototype, it will tell the compiler that a function by this name has been defined somewhere.
// int sum(int, int) this is also acceptable

int main()
{
    int num1, num2;
    cout<<"Enter first number: ";
    cin>>num1;
    cout<<"Enter second number: ";
    cin>>num2;
    //num1 and num2 are actual parameters
    cout<<"The sum of entered numbers is : "<<sum(num1, num2)<<endl; // here we called the function

    cout<<endl;
    return 0;
}

int sum(int a, int b) // this is function definition.
{
    //a and b are formal parameters which take values from actual parameter num1 and num2
    int c = a+b;
    return c;
}