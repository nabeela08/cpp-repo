#include<iostream>
using namespace std;

int main()
{
    // basic example
    int a = 4;
    int *ptr = &a;
    // *ptr = 5;
    cout<<"The value of a is "<<*(ptr)<<endl;

    // new operator/keyword
    int *p = new int(25);
    cout<<"The value at address p is "<<*(p)<<endl;

    //dynamic initialisation of an array.
    int *arr = new int[3];
    arr[0] = 100;
    // arr[1] = 200;
    *(arr+1) = 200;
    arr[2] = 300;
    // delete[] arr; by this you set the array free and it will throw garbage values.
    cout<<"Value of arr[0] is "<<arr[0]<<endl;
    cout<<"Value of arr[1] is "<<arr[1]<<endl;
    cout<<"Value of arr[2] is "<<arr[2]<<endl;


    cout<<endl;
    return 0;
}