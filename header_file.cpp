//There are two types of header files:
// 1. System header filer: it comes with the compiler
#include<iostream>
#include<iomanip>
//2. User defined header file: wriiten by the programmer
// #include"this.h" (this will introduce an error if this.h is not present in current directory)
using namespace std;
int main(){
    // cout<<"Arithmetic operators in c++:"<<endl;
    // cout<<"Value of a+b is: "<<a+b<<endl;
    // cout<<"Value of a-b is: "<<a-b<<endl;
    // cout<<"Value of a*b is: "<<a*b<<endl;
    // cout<<"Value of a/b is: "<<a/b<<endl;
    // cout<<"Value of a%b is: "<<a%b<<endl;
    // cout<<"Value of a++ is: "<<a++<<endl;
    // cout<<"Value of a-- is: "<<a--<<endl;
    // cout<<"Value of ++a is: "<<++a<<endl;
    // cout<<"Value of --a is: "<<--a<<endl;
    // manipulars in c++
    // int a=5, b=4;
    // cout<<"Value of a is: "<<setw(4)<<a<<endl;
    // operators precedence
    int a=5, b=4;
    int c = a*5+b;
    cout<<c;
    return 0;
}

  



