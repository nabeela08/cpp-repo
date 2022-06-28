#include<iostream>
using namespace std;

void swap(int*, int*);

int main()
{
    //call by reference using pointers
    int a, b;
    cout<<"Enter the value in a : ";
    cin>>a;
    cout<<"Enter the value in b : ";
    cin>>b;
    cout<<""<<endl;

    cout<<"Values before running swap."<<endl;
    cout<<"The value of a : "<<a<<endl;
    cout<<"The value of b : "<<b<<endl;
    swap(&a, &b);
    cout<<"Values after running swap."<<endl;
    cout<<"The value of a : "<<a<<endl;
    cout<<"The value of b : "<<b<<endl;
    // original values of a and b will be changed.
     
    cout<<endl;
    return 0;
}

void swap(int* a, int* b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}