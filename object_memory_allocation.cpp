#include<iostream>
using namespace std;

//When we define a class it is assumed that it will not use the memory, only when an object is declared then memory is allocated in the memory but this thing is partially true.

// those elements of a class which are specific to an object will have different allocated space in the memory. for e.g. if we create a class employee that has elements such as name, salary and a function that will calculate the wages of an employee. So here name and salary will have different allocted space in memory as they are specific to an object, however that function will not have different allocated spaces. Different objects will share the same allocated memory chunk for that function, and that chunk is allocated when we define the class.

int main()
{
    cout<<endl;
    // it was a theoretical part only.
    cout<<endl;
    return 0;
}




