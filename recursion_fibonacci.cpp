#include<iostream>
using namespace std;

int fib(int n){
    if(n<2){
        return 1;
    }
    else{
    return fib(n-2) + fib(n-1);
    }
}

int main()
{
    int a;
    cout<<"Enter a number: ";
    cin>>a;
    cout<<"The term in fibonacci series at index "<<a<<" is "<<fib(a)<<endl;
    cout<<endl;
    return 0;
}
