#include<iostream>
using namespace std;

class B
{
    public:
        void say()
        {
            cout<<"Hello User."<<endl;
        }
};

class D : public B
{
    int a; 
    public:
        void say()
        {
            cout<<"You are one in a million <3"<<endl;
        }
        //it will automatically get resolved as Class D will overwrite the say() method of class B which is inherited to it.
};

int main()
{
    B obj1;
    obj1.say();

    D obj2;
    obj2.say();

    cout<<endl;
    return 0;
}