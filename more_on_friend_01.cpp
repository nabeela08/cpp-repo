#include<iostream>
using namespace std;

class Y; //forward declaration

class X
{
    int data;
    public:
        void setvalue(int value)
        {
            data = value;
        }
        friend void add(X, Y);
};

class Y
{
    int num;
    public:
        void setvalue(int value)
        {
            num = value;
        }
        friend void add(X, Y);
};

void add(X o1, Y o2)
{
    cout<<"Summing the data of X and Y objects gives: "<< o1.data + o2.num <<endl;
}

int main()
{
    X a;
    a.setvalue(2);
    Y b;
    b.setvalue(5);

    add(a, b);

    cout<<endl;
    return 0;
}