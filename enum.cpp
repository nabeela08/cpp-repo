#include<iostream>
using namespace std;

int main()
{
    enum meal{breakfast, lunch, dinner};
    meal m1 = lunch, m2=dinner, m3=breakfast;

    cout<<"value of m1 is "<<m1<<endl;
    cout<<"value of m2 is "<<m2<<endl;
    cout<<"value of m3 is "<<m3<<endl;

    cout<<endl;
    return 0;
}
