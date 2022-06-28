#include<iostream>
using namespace std;

float ammount(float prin, float rate = 2, float time = 1)
{
    return (prin*rate*time);
};
// if we are using the default arguments then we have to write the fucntion definition before the call otherwise it will give an error.
// we can use the fucntion prototype and then declare the definition.
// float ammount2(float rate = 2, float prin, float time = 1)
// {
//     return (prin*rate*time);
// };
// Writing such default arguments is illegal, they must not be proceeded by any non-default arguments.


int main()
{
    cout<<"ammount(25000) : "<<ammount(25000)<<endl;
    cout<<"ammount(25000, 4) : "<<ammount(25000, 4)<<endl;
    cout<<"ammount(25000, 4, 3) : "<<ammount(25000, 4, 3)<<endl;

    cout<<endl;
    return 0;
}