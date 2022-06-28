#include<iostream>
using namespace std;

class base1
{
    public:
    void greet()
    {
        cout<<"How you doin'?"<<endl;
    }
};
class base2
{
    public:
    void greet()
    {
        cout<<"Kya haal chaal?"<<endl;
    }
};

class derived : public base1, public base2
{
    int a;
//resolution of the ambiguity.
    public:
        void greet()
        {
            base1::greet();
            // base2::greet(); // comment-in above one to use it.
        }
        /* we will create tha same method and inside the body
        of this mehthod we will mention that from which of the
        parents base classes we are using the method, by giving 
        that base_class_name :: method_name*/

};

int main()
{
    cout<<endl;

    base1 obj1;
    base2 obj2;

    obj1.greet();
    obj2.greet();

    derived obj3;
    obj3.greet(); 

    cout<<endl;
    return 0;
}