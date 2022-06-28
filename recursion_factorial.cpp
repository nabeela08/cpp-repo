#include<iostream>
using namespace std;

int factorial(int n){
    if(n<=1){
        return 1;
    }
    return n * factorial(n-1);
}

int main()
{
    int a;
    cout<<"Enter a number: ";
    cin>>a;
    cout<<endl;
    cout<<"The factorial of "<<a<< " is "<<factorial(a)<<endl;

    cout<<endl;
    return 0;
}
