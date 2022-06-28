#include<iostream>
using namespace std;

inline int product(int, int);
int func(int, int);

int main()
{
    int a, b;
    cout<<"Enter a : ";
    cin>>a;
    cout<<"Enter b : ";
    cin>>b;
    cout<<"The value of a*b is : "<<product(a,b)<<endl;
    cout<<"The value of a*b is : "<<product(a,b)<<endl;
    cout<<"The value of a*b is : "<<product(a,b)<<endl;
    cout<<"The value of a*b is : "<<product(a,b)<<endl;
    cout<<"The value of a*b is : "<<product(a,b)<<endl;
    
    cout<<endl;

    cout<<"The value of func(a,b) is : "<<func(a, b)<<endl;
    cout<<"The value of func(a,b) is : "<<func(a, b)<<endl;
    cout<<"The value of func(a,b) is : "<<func(a, b)<<endl;
    cout<<"The value of func(a,b) is : "<<func(a, b)<<endl;
    cout<<"The value of func(a,b) is : "<<func(a, b)<<endl;

    cout<<endl;
    return 0;
}

inline int product(int x, int y)
{
    return x*y;
}
int func(int x, int y)
{
    //not recommended to use static func in inline func
    static int c=0;
    c += 1;
    return (x*y)+c;
}


