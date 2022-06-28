#include<iostream>
using namespace std;

void func(int a){
    cout<<"I am non template function."<<endl;
    cout<<"Value of a is: "<<a<<endl;
}

template <class T>
void func(T a){
    cout<<"I am template function."<<endl;
    cout<<"Value of a is: "<<a<<endl;   
}

int main()
{
    func("Damon Salvatore");

    func(25); //exact match i.e int will take the first priority.

    cout<<endl;
    return 0;
}