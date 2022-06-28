#include<iostream>
using namespace std;

int main()
{
    float a = 25;
    float &b = a;
    cout<<"Value of a : "<<a<<endl;
    cout<<"Value of b : "<<b<<endl;
    cout<<"Address of a : "<<&a<<endl;
    cout<<"Address of b : "<<&b<<endl;

    //Variable is same but it is referenced by two different names. You can see that their adresses are same.

    cout<<endl;
    return 0;
}